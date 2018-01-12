#pragma once

#include "citrus/types.hpp"

namespace ctr {
    namespace err {
        typedef enum {
            // Generic
            SOURCE_GENERIC,

            // Library error sources.
            SOURCE_ALLOCATE_BUFFER,
            SOURCE_INVALID_CHANNEL,
            SOURCE_IO_ERROR,
            SOURCE_OPERATION_CANCELLED,
            SOURCE_PROCESS_CLOSING,
            SOURCE_VALIDATE_SMDH,

            // Service error sources.

            // AC error sources.
            SOURCE_AC_INIT,
            SOURCE_AC_GET_WIFI_STATUS,

            // AM error sources.
            SOURCE_AM_INIT,
            SOURCE_AM_CANCEL_CIA_INSTALL,
            SOURCE_AM_DELETE_TITLE,
            SOURCE_AM_FINISH_CIA_INSTALL,
            SOURCE_AM_GET_CIA_FILE_INFO,
            SOURCE_AM_GET_DEVICE_ID,
            SOURCE_AM_GET_TITLE_COUNT,
            SOURCE_AM_GET_TITLE_ID_LIST,
            SOURCE_AM_INITIALIZE_EXTERNAL_TITLE_DATABASE,
            SOURCE_AM_LIST_TITLES,
            SOURCE_AM_START_CIA_INSTALL,

            // APT error sources.
            SOURCE_APT_DO_APP_JUMP,
            SOURCE_APT_PREPARE_TO_DO_APP_JUMP,

            // CFGNOR error sources.
            SOURCE_CFGNOR_INIT,
            SOURCE_CFGNOR_READ_DATA,
            SOURCE_CFGNOR_WRITE_DATA,

            // CSND error sources.
            SOURCE_CSND_INIT,
            SOURCE_CSND_EXEC_CMDS,

            // FSFILE error sources.
            SOURCE_FSFILE_READ,
            SOURCE_FSFILE_WRITE,

            // FSUSER error sources.
            SOURCE_FSUSER_GET_ARCHIVE_RESOURCE,
            SOURCE_FSUSER_OPEN_ARCHIVE,
            SOURCE_FSUSER_OPEN_FILE,

            // HIDUSER error sources.
            SOURCE_HIDUSER_DISABLE_ACCELEROMETER,
            SOURCE_HIDUSER_DISABLE_GYROSCOPE,
            SOURCE_HIDUSER_ENABLE_ACCELEROMETER,
            SOURCE_HIDUSER_ENABLE_GYROSCOPE,

            // IRU error sources.
            SOURCE_IRU_INIT,
            SOURCE_IRU_RECV_DATA,
            SOURCE_IRU_SEND_DATA,

            // NEWS error sources.
            SOURCE_NEWS_INIT,
            SOURCE_NEWS_ADD_NOTIFICATION,

            // PTMU error sources.
            SOURCE_PTMU_INIT,
            SOURCE_PTMU_GET_BATTERY_CHARGE_STATE,
            SOURCE_PTMU_GET_BATTERY_LEVEL,

            // SOC error sources.
            SOURCE_SOC_INIT
        } Source;

        typedef enum {
            MODULE_COMMON = 0,
            MODULE_NN_KERNEL = 1,
            MODULE_NN_UTIL = 2,
            MODULE_NN_FILE_SERVER = 3,
            MODULE_NN_LOADER_SERVER = 4,
            MODULE_NN_TCB = 5,
            MODULE_NN_OS = 6,
            MODULE_NN_DBG = 7,
            MODULE_NN_DMNT = 8,
            MODULE_NN_PDN = 9,
            MODULE_NN_GX = 10,
            MODULE_NN_I2C = 11,
            MODULE_NN_GPIO = 12,
            MODULE_NN_DD = 13,
            MODULE_NN_CODEC = 14,
            MODULE_NN_SPI = 15,
            MODULE_NN_PXI = 16,
            MODULE_NN_FS = 17,
            MODULE_NN_DI = 18,
            MODULE_NN_HID = 19,
            MODULE_NN_CAMERA = 20,
            MODULE_NN_PI = 21,
            MODULE_NN_PM = 22,
            MODULE_NN_PMLOW = 23,
            MODULE_NN_FSI = 24,
            MODULE_NN_SRV = 25,
            MODULE_NN_NDM = 26,
            MODULE_NN_NWM = 27,
            MODULE_NN_SOCKET = 28,
            MODULE_NN_LDR = 29,
            MODULE_NN_ACC = 30,
            MODULE_NN_ROMFS = 31,
            MODULE_NN_AM = 32,
            MODULE_NN_HIO = 33,
            MODULE_NN_UPDATER = 34,
            MODULE_NN_MIC = 35,
            MODULE_NN_FND = 36,
            MODULE_NN_MP = 37,
            MODULE_NN_MPWL = 38,
            MODULE_NN_AC = 39,
            MODULE_NN_HTTP = 40,
            MODULE_NN_DSP = 41,
            MODULE_NN_SND = 42,
            MODULE_NN_DLP = 43,
            MODULE_NN_HIOLOW = 44,
            MODULE_NN_CSND = 45,
            MODULE_NN_SSL = 46,
            MODULE_NN_AMLOW = 47,
            MODULE_NN_NEX = 48,
            MODULE_NN_FRIENDS = 49,
            MODULE_NN_RDT = 50,
            MODULE_NN_APPLET = 51,
            MODULE_NN_NIM = 52,
            MODULE_NN_PTM = 53,
            MODULE_NN_MIDI = 54,
            MODULE_NN_MC = 55,
            MODULE_NN_SWC = 56,
            MODULE_NN_FATFS = 57,
            MODULE_NN_NGC = 58,
            MODULE_NN_CARD = 59,
            MODULE_NN_CARDNOR = 60,
            MODULE_NN_SDMC = 61,
            MODULE_NN_BOSS = 62,
            MODULE_NN_DBM = 63,
            MODULE_NN_CONFIG = 64,
            MODULE_NN_PS = 65,
            MODULE_NN_CEC = 66,
            MODULE_NN_IR = 67,
            MODULE_NN_UDS = 68,
            MODULE_NN_PL = 69,
            MODULE_NN_CUP = 70,
            MODULE_NN_GYROSCOPE = 71,
            MODULE_NN_MCU = 72,
            MODULE_NN_NS = 73,
            MODULE_NN_NEWS = 74,
            MODULE_NN_RO = 75,
            MODULE_NN_GD = 76,
            MODULE_NN_CARDSPI = 77,
            MODULE_NN_EC = 78,
            MODULE_NN_WEBBRS = 79,
            MODULE_NN_TEST = 80,
            MODULE_NN_ENC = 81,
            MODULE_NN_PIA = 82,
            MODULE_NN_MVD = 92, // TODO: Check
            MODULE_NN_QTM = 96, // TODO: Check
            MODULE_APPLICATION = 254,
            MODULE_INVALID_RESULT_VALUE = 255
        } Module;

        typedef enum {
            LEVEL_SUCCESS = 0,
            LEVEL_INFO = 1,
            LEVEL_STATUS = 25,
            LEVEL_TEMPORARY = 26,
            LEVEL_PERMANENT = 27,
            LEVEL_USAGE = 28,
            LEVEL_REINIT = 29,
            LEVEL_RESET = 30,
            LEVEL_FATAL = 31
        } Level;

        typedef enum {
            SUMMARY_SUCCESS = 0,
            SUMMARY_NOTHING_HAPPENED = 1,
            SUMMARY_WOULD_BLOCK = 2,
            SUMMARY_OUT_OF_RESOURCE = 3,
            SUMMARY_NOT_FOUND = 4,
            SUMMARY_INVALID_STATE = 5,
            SUMMARY_NOT_SUPPORTED = 6,
            SUMMARY_INVALID_ARGUMENT = 7,
            SUMMARY_WRONG_ARGUMENT = 8,
            SUMMARY_CANCELED = 9,
            SUMMARY_STATUS_CHANGED = 10,
            SUMMARY_INTERNAL = 11,
            SUMMARY_INVALID_RESULT_VALUE = 63
        } Summary;

        typedef enum {
            DESCRIPTION_SUCCESS = 0,
            // TODO: Check from here...
            DESCRIPTION_INVALID_MEMORY_PERMISSIONS = 2,
            DESCRIPTION_INVALID_TICKET_VERSION = 4,
            DESCRIPTION_STRING_TOO_BIG = 5,
            DESCRIPTION_ACCESS_DENIED = 6,
            DESCRIPTION_STRING_TOO_SMALL = 7,
            DESCRIPTION_CAMERA_BUSY = 8,
            DESCRIPTION_NOT_ENOUGH_MEMORY = 10,
            DESCRIPTION_SESSION_CLOSED_BY_REMOTE = 26,
            DESCRIPTION_INVALID_NCCH = 37,
            DESCRIPTION_INVALID_TITLE_VERSION = 39,
            DESCRIPTION_DATABASE_DOES_NOT_EXIST = 43,
            DESCRIPTION_TRIED_TO_UNINSTALL_SYSTEM_APP = 44,
            DESCRIPTION_INVALID_COMMAND = 47,
            DESCRIPTION_ARCHIVE_NOT_MOUNTED = 101,
            DESCRIPTION_REQUEST_TIMED_OUT = 105,
            DESCRIPTION_INVALID_SIGNATURE = 106,
            DESCRIPTION_TITLE_NOT_FOUND = 120,
            DESCRIPTION_GAMECARD_NOT_INSERTED = 141,
            DESCRIPTION_INVALID_FILE_OPEN_FLAGS = 230,
            DESCRIPTION_INVALID_CONFIGURATION = 271,
            DESCRIPTION_NCCH_HASH_CHECK_FAILED = 391,
            DESCRIPTION_AES_VERIFICATION_FAILED = 392,
            DESCRIPTION_INVALID_DATABASE = 393,
            DESCRIPTION_SAVE_HASH_CHECK_FAILED = 395,
            DESCRIPTION_COMMAND_PERMISSION_DENIED = 630,
            DESCRIPTION_INVALID_PATH = 702,
            DESCRIPTION_INCORRECT_READ_SIZE = 761,
            // TODO: ...to here.
            DESCRIPTION_INVALID_SELECTION = 1000,
            DESCRIPTION_TOO_LARGE = 1001,
            DESCRIPTION_NOT_AUTHORIZED = 1002,
            DESCRIPTION_ALREADY_DONE = 1003,
            DESCRIPTION_INVALID_SIZE = 1004,
            DESCRIPTION_INVALID_ENUM_VALUE = 1005,
            DESCRIPTION_INVALID_COMBINATION = 1006,
            DESCRIPTION_NO_DATA = 1007,
            DESCRIPTION_BUSY = 1008,
            DESCRIPTION_MISALIGNED_ADDRESS = 1009,
            DESCRIPTION_MISALIGNED_SIZE = 1010,
            DESCRIPTION_OUT_OF_MEMORY = 1011,
            DESCRIPTION_NOT_IMPLEMENTED = 1012,
            DESCRIPTION_INVALID_ADDRESS = 1013,
            DESCRIPTION_INVALID_POINTER = 1014,
            DESCRIPTION_INVALID_HANDLE = 1015,
            DESCRIPTION_NOT_INITIALIZED = 1016,
            DESCRIPTION_ALREADY_INITIALIZED = 1017,
            DESCRIPTION_NOT_FOUND = 1018,
            DESCRIPTION_CANCEL_REQUESTED = 1019,
            DESCRIPTION_ALREADY_EXISTS = 1020,
            DESCRIPTION_OUT_OF_RANGE = 1021,
            DESCRIPTION_TIMEOUT = 1022,
            DESCRIPTION_INVALID_RESULT_VALUE = 1023
        } Description;

        typedef struct {
            Source source;
            Module module;
            Level level;
            Summary summary;
            Description description;
        } Error;

        bool has();
        Error get();
        void set(Error error);
        void clear();
        const std::string toString(Error error);
    }
}