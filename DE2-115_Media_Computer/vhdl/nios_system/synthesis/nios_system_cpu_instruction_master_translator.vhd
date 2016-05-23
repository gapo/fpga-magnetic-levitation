-- nios_system_cpu_instruction_master_translator.vhd

-- Generated using ACDS version 13.0 156 at 2013.06.14.16:00:33

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity nios_system_cpu_instruction_master_translator is
	generic (
		AV_ADDRESS_W                : integer := 28;
		AV_DATA_W                   : integer := 32;
		AV_BURSTCOUNT_W             : integer := 1;
		AV_BYTEENABLE_W             : integer := 4;
		UAV_ADDRESS_W               : integer := 32;
		UAV_BURSTCOUNT_W            : integer := 3;
		USE_READ                    : integer := 1;
		USE_WRITE                   : integer := 0;
		USE_BEGINBURSTTRANSFER      : integer := 0;
		USE_BEGINTRANSFER           : integer := 0;
		USE_CHIPSELECT              : integer := 0;
		USE_BURSTCOUNT              : integer := 0;
		USE_READDATAVALID           : integer := 1;
		USE_WAITREQUEST             : integer := 1;
		USE_READRESPONSE            : integer := 0;
		USE_WRITERESPONSE           : integer := 0;
		AV_SYMBOLS_PER_WORD         : integer := 4;
		AV_ADDRESS_SYMBOLS          : integer := 1;
		AV_BURSTCOUNT_SYMBOLS       : integer := 0;
		AV_CONSTANT_BURST_BEHAVIOR  : integer := 0;
		UAV_CONSTANT_BURST_BEHAVIOR : integer := 0;
		AV_LINEWRAPBURSTS           : integer := 1;
		AV_REGISTERINCOMINGSIGNALS  : integer := 0
	);
	port (
		clk                      : in  std_logic                     := '0';             --                       clk.clk
		reset                    : in  std_logic                     := '0';             --                     reset.reset
		uav_address              : out std_logic_vector(31 downto 0);                    -- avalon_universal_master_0.address
		uav_burstcount           : out std_logic_vector(2 downto 0);                     --                          .burstcount
		uav_read                 : out std_logic;                                        --                          .read
		uav_write                : out std_logic;                                        --                          .write
		uav_waitrequest          : in  std_logic                     := '0';             --                          .waitrequest
		uav_readdatavalid        : in  std_logic                     := '0';             --                          .readdatavalid
		uav_byteenable           : out std_logic_vector(3 downto 0);                     --                          .byteenable
		uav_readdata             : in  std_logic_vector(31 downto 0) := (others => '0'); --                          .readdata
		uav_writedata            : out std_logic_vector(31 downto 0);                    --                          .writedata
		uav_lock                 : out std_logic;                                        --                          .lock
		uav_debugaccess          : out std_logic;                                        --                          .debugaccess
		av_address               : in  std_logic_vector(27 downto 0) := (others => '0'); --      avalon_anti_master_0.address
		av_waitrequest           : out std_logic;                                        --                          .waitrequest
		av_read                  : in  std_logic                     := '0';             --                          .read
		av_readdata              : out std_logic_vector(31 downto 0);                    --                          .readdata
		av_readdatavalid         : out std_logic;                                        --                          .readdatavalid
		av_beginbursttransfer    : in  std_logic                     := '0';
		av_begintransfer         : in  std_logic                     := '0';
		av_burstcount            : in  std_logic_vector(0 downto 0)  := (others => '0');
		av_byteenable            : in  std_logic_vector(3 downto 0)  := (others => '0');
		av_chipselect            : in  std_logic                     := '0';
		av_clken                 : in  std_logic                     := '0';
		av_debugaccess           : in  std_logic                     := '0';
		av_lock                  : in  std_logic                     := '0';
		av_response              : out std_logic_vector(1 downto 0);
		av_write                 : in  std_logic                     := '0';
		av_writedata             : in  std_logic_vector(31 downto 0) := (others => '0');
		av_writeresponserequest  : in  std_logic                     := '0';
		av_writeresponsevalid    : out std_logic;
		uav_clken                : out std_logic;
		uav_response             : in  std_logic_vector(1 downto 0)  := (others => '0');
		uav_writeresponserequest : out std_logic;
		uav_writeresponsevalid   : in  std_logic                     := '0'
	);
end entity nios_system_cpu_instruction_master_translator;

architecture rtl of nios_system_cpu_instruction_master_translator is
	component altera_merlin_master_translator is
		generic (
			AV_ADDRESS_W                : integer := 32;
			AV_DATA_W                   : integer := 32;
			AV_BURSTCOUNT_W             : integer := 4;
			AV_BYTEENABLE_W             : integer := 4;
			UAV_ADDRESS_W               : integer := 38;
			UAV_BURSTCOUNT_W            : integer := 10;
			USE_READ                    : integer := 1;
			USE_WRITE                   : integer := 1;
			USE_BEGINBURSTTRANSFER      : integer := 0;
			USE_BEGINTRANSFER           : integer := 0;
			USE_CHIPSELECT              : integer := 0;
			USE_BURSTCOUNT              : integer := 1;
			USE_READDATAVALID           : integer := 1;
			USE_WAITREQUEST             : integer := 1;
			USE_READRESPONSE            : integer := 0;
			USE_WRITERESPONSE           : integer := 0;
			AV_SYMBOLS_PER_WORD         : integer := 4;
			AV_ADDRESS_SYMBOLS          : integer := 0;
			AV_BURSTCOUNT_SYMBOLS       : integer := 0;
			AV_CONSTANT_BURST_BEHAVIOR  : integer := 0;
			UAV_CONSTANT_BURST_BEHAVIOR : integer := 0;
			AV_LINEWRAPBURSTS           : integer := 0;
			AV_REGISTERINCOMINGSIGNALS  : integer := 0
		);
		port (
			clk                      : in  std_logic                     := 'X';             -- clk
			reset                    : in  std_logic                     := 'X';             -- reset
			uav_address              : out std_logic_vector(31 downto 0);                    -- address
			uav_burstcount           : out std_logic_vector(2 downto 0);                     -- burstcount
			uav_read                 : out std_logic;                                        -- read
			uav_write                : out std_logic;                                        -- write
			uav_waitrequest          : in  std_logic                     := 'X';             -- waitrequest
			uav_readdatavalid        : in  std_logic                     := 'X';             -- readdatavalid
			uav_byteenable           : out std_logic_vector(3 downto 0);                     -- byteenable
			uav_readdata             : in  std_logic_vector(31 downto 0) := (others => 'X'); -- readdata
			uav_writedata            : out std_logic_vector(31 downto 0);                    -- writedata
			uav_lock                 : out std_logic;                                        -- lock
			uav_debugaccess          : out std_logic;                                        -- debugaccess
			av_address               : in  std_logic_vector(27 downto 0) := (others => 'X'); -- address
			av_waitrequest           : out std_logic;                                        -- waitrequest
			av_read                  : in  std_logic                     := 'X';             -- read
			av_readdata              : out std_logic_vector(31 downto 0);                    -- readdata
			av_readdatavalid         : out std_logic;                                        -- readdatavalid
			av_burstcount            : in  std_logic_vector(0 downto 0)  := (others => 'X'); -- burstcount
			av_byteenable            : in  std_logic_vector(3 downto 0)  := (others => 'X'); -- byteenable
			av_beginbursttransfer    : in  std_logic                     := 'X';             -- beginbursttransfer
			av_begintransfer         : in  std_logic                     := 'X';             -- begintransfer
			av_chipselect            : in  std_logic                     := 'X';             -- chipselect
			av_write                 : in  std_logic                     := 'X';             -- write
			av_writedata             : in  std_logic_vector(31 downto 0) := (others => 'X'); -- writedata
			av_lock                  : in  std_logic                     := 'X';             -- lock
			av_debugaccess           : in  std_logic                     := 'X';             -- debugaccess
			uav_clken                : out std_logic;                                        -- clken
			av_clken                 : in  std_logic                     := 'X';             -- clken
			uav_response             : in  std_logic_vector(1 downto 0)  := (others => 'X'); -- response
			av_response              : out std_logic_vector(1 downto 0);                     -- response
			uav_writeresponserequest : out std_logic;                                        -- writeresponserequest
			uav_writeresponsevalid   : in  std_logic                     := 'X';             -- writeresponsevalid
			av_writeresponserequest  : in  std_logic                     := 'X';             -- writeresponserequest
			av_writeresponsevalid    : out std_logic                                         -- writeresponsevalid
		);
	end component altera_merlin_master_translator;

begin

	cpu_instruction_master_translator : component altera_merlin_master_translator
		generic map (
			AV_ADDRESS_W                => AV_ADDRESS_W,
			AV_DATA_W                   => AV_DATA_W,
			AV_BURSTCOUNT_W             => AV_BURSTCOUNT_W,
			AV_BYTEENABLE_W             => AV_BYTEENABLE_W,
			UAV_ADDRESS_W               => UAV_ADDRESS_W,
			UAV_BURSTCOUNT_W            => UAV_BURSTCOUNT_W,
			USE_READ                    => USE_READ,
			USE_WRITE                   => USE_WRITE,
			USE_BEGINBURSTTRANSFER      => USE_BEGINBURSTTRANSFER,
			USE_BEGINTRANSFER           => USE_BEGINTRANSFER,
			USE_CHIPSELECT              => USE_CHIPSELECT,
			USE_BURSTCOUNT              => USE_BURSTCOUNT,
			USE_READDATAVALID           => USE_READDATAVALID,
			USE_WAITREQUEST             => USE_WAITREQUEST,
			USE_READRESPONSE            => USE_READRESPONSE,
			USE_WRITERESPONSE           => USE_WRITERESPONSE,
			AV_SYMBOLS_PER_WORD         => AV_SYMBOLS_PER_WORD,
			AV_ADDRESS_SYMBOLS          => AV_ADDRESS_SYMBOLS,
			AV_BURSTCOUNT_SYMBOLS       => AV_BURSTCOUNT_SYMBOLS,
			AV_CONSTANT_BURST_BEHAVIOR  => AV_CONSTANT_BURST_BEHAVIOR,
			UAV_CONSTANT_BURST_BEHAVIOR => UAV_CONSTANT_BURST_BEHAVIOR,
			AV_LINEWRAPBURSTS           => AV_LINEWRAPBURSTS,
			AV_REGISTERINCOMINGSIGNALS  => AV_REGISTERINCOMINGSIGNALS
		)
		port map (
			clk                      => clk,                                --                       clk.clk
			reset                    => reset,                              --                     reset.reset
			uav_address              => uav_address,                        -- avalon_universal_master_0.address
			uav_burstcount           => uav_burstcount,                     --                          .burstcount
			uav_read                 => uav_read,                           --                          .read
			uav_write                => uav_write,                          --                          .write
			uav_waitrequest          => uav_waitrequest,                    --                          .waitrequest
			uav_readdatavalid        => uav_readdatavalid,                  --                          .readdatavalid
			uav_byteenable           => uav_byteenable,                     --                          .byteenable
			uav_readdata             => uav_readdata,                       --                          .readdata
			uav_writedata            => uav_writedata,                      --                          .writedata
			uav_lock                 => uav_lock,                           --                          .lock
			uav_debugaccess          => uav_debugaccess,                    --                          .debugaccess
			av_address               => av_address,                         --      avalon_anti_master_0.address
			av_waitrequest           => av_waitrequest,                     --                          .waitrequest
			av_read                  => av_read,                            --                          .read
			av_readdata              => av_readdata,                        --                          .readdata
			av_readdatavalid         => av_readdatavalid,                   --                          .readdatavalid
			av_burstcount            => "1",                                --               (terminated)
			av_byteenable            => "1111",                             --               (terminated)
			av_beginbursttransfer    => '0',                                --               (terminated)
			av_begintransfer         => '0',                                --               (terminated)
			av_chipselect            => '0',                                --               (terminated)
			av_write                 => '0',                                --               (terminated)
			av_writedata             => "00000000000000000000000000000000", --               (terminated)
			av_lock                  => '0',                                --               (terminated)
			av_debugaccess           => '0',                                --               (terminated)
			uav_clken                => open,                               --               (terminated)
			av_clken                 => '1',                                --               (terminated)
			uav_response             => "00",                               --               (terminated)
			av_response              => open,                               --               (terminated)
			uav_writeresponserequest => open,                               --               (terminated)
			uav_writeresponsevalid   => '0',                                --               (terminated)
			av_writeresponserequest  => '0',                                --               (terminated)
			av_writeresponsevalid    => open                                --               (terminated)
		);

end architecture rtl; -- of nios_system_cpu_instruction_master_translator
