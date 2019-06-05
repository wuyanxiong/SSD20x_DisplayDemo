#ifndef _MAIN_UI_H_
#define _MAIN_UI_H_

#define UI_ARGB2PIXEL8888(a,r,g,b)  \
    (((a) << 24) | ((r) << 16) | ((g) << 8) | (b))
#define UI_ARGB888_BLUE UI_ARGB2PIXEL8888(255,0,0,255)

#define UI_ARGB888_FF UI_ARGB2PIXEL8888(255,255,255,255)

#define UI_ARGB888_KEY UI_ARGB2PIXEL8888(128,128,128,128)


#define UI_DISP_W           1920
#define UI_DISP_H           1080

//#define UI_1024_600

#ifdef UI_1024_600
#define MAINWND_W           1024
#define MAINWND_H           600
#else
#define MAINWND_W           800
#define MAINWND_H           480
#endif

#define HEADER_LOGO_HEIGHT  50
#define HEADER_LOGO_WIDTH   200

// contorler handle
#define IDC_LISTVIEW_BASE           80
#define IDC_STATIC_BASE             100
#define IDC_COMBOX_BASE             240
#define IDC_EDIT_BASE               300
#define IDC_ICONVIEW_BASE           400
#define IDC_TRACKBAR_BASE           430
#define IDC_TIMER_BASE              450
#define IDC_PROGRESS_BASE           470
#define IDC_BUTTON_BASE             500

//============================= main page ===============================
#define IDC_MAINPAGE_BUTTON_BASE            (IDC_BUTTON_BASE)
#define IDC_MAINPAGE_CONVIEW_BASE           (IDC_ICONVIEW_BASE)
#define IDC_MAINPAGE_TIMER_BASE             (IDC_TIMER_BASE)

#define IDC_BUTTON_SETTING                  (IDC_MAINPAGE_BUTTON_BASE)
#define IDC_BUTTON_VIDEO                    (IDC_MAINPAGE_BUTTON_BASE+1)
#define IDC_BUTTON_MIC                      (IDC_MAINPAGE_BUTTON_BASE+2)
#define IDC_BUTTON_CALL                     (IDC_MAINPAGE_BUTTON_BASE+3)
#define IDC_BUTTON_TIME                     (IDC_MAINPAGE_BUTTON_BASE+4)
#define IDC_BUTTON_SUBCLOSE                 (IDC_MAINPAGE_BUTTON_BASE+5)
#define IDC_BUTTON_CONFIRM                  (IDC_MAINPAGE_BUTTON_BASE+6)

#define IDC_ICONVIEW_WEATHER                (IDC_MAINPAGE_CONVIEW_BASE)
#define IDC_TIMER_TIME                      (IDC_MAINPAGE_TIMER_BASE)

//============================= call page ===============================
#define IDC_CALLPAGE_BUTTON_BASE            (IDC_BUTTON_BASE+20)
#define IDC_CALLPAGE_EDIT_BASE              (IDC_EDIT_BASE)

#define IDC_CALL_BUTTON_1                   (IDC_CALLPAGE_BUTTON_BASE+1)
#define IDC_CALL_BUTTON_2                   (IDC_CALLPAGE_BUTTON_BASE+2)
#define IDC_CALL_BUTTON_3                   (IDC_CALLPAGE_BUTTON_BASE+3)
#define IDC_CALL_BUTTON_4                   (IDC_CALLPAGE_BUTTON_BASE+4)
#define IDC_CALL_BUTTON_5                   (IDC_CALLPAGE_BUTTON_BASE+5)
#define IDC_CALL_BUTTON_6                   (IDC_CALLPAGE_BUTTON_BASE+6)
#define IDC_CALL_BUTTON_7                   (IDC_CALLPAGE_BUTTON_BASE+7)
#define IDC_CALL_BUTTON_8                   (IDC_CALLPAGE_BUTTON_BASE+8)
#define IDC_CALL_BUTTON_9                   (IDC_CALLPAGE_BUTTON_BASE+9)
#define IDC_CALL_BUTTON_ABC                 (IDC_CALLPAGE_BUTTON_BASE+10)
#define IDC_CALL_BUTTON_0                   (IDC_CALLPAGE_BUTTON_BASE+11)
#define IDC_CALL_BUTTON_X                   (IDC_CALLPAGE_BUTTON_BASE+12)
#define IDC_CALL_BUTTON_CALLING             (IDC_CALLPAGE_BUTTON_BASE+13)
#define IDC_VIDEO_BUTTON_START_MONITOR      (IDC_CALLPAGE_BUTTON_BASE+14)
#define IDC_VIDEO_BUTTON_STOP_MONITOR       (IDC_CALLPAGE_BUTTON_BASE+15)
#define IDC_VIDEO_BUTTON_HOLDON             (IDC_CALLPAGE_BUTTON_BASE+16)
#define IDC_VIDEO_BUTTON_HANGUP             (IDC_CALLPAGE_BUTTON_BASE+17)

#define IDC_CALL_EDIT_CALLNUM               (IDC_CALLPAGE_EDIT_BASE)

//============================= camara page ===============================
#define IDC_CAMARAPAGE_BUTTON_BASE        (IDC_BUTTON_BASE+50)

#define IDC_VIDEO_BUTTON_START_REGISTER     (IDC_CAMARAPAGE_BUTTON_BASE)
#define IDC_VIDEO_BUTTON_STOP_REGISTER      (IDC_CAMARAPAGE_BUTTON_BASE+1)       // not use
#define IDC_VIDEO_BUTTON_FACE_DISP          (IDC_CAMARAPAGE_BUTTON_BASE+2)
#define IDC_VIDEO_BUTTON_FACE_OK            (IDC_CAMARAPAGE_BUTTON_BASE+3)
#define IDC_VIDEO_BUTTON_FACE_CANCEL        (IDC_CAMARAPAGE_BUTTON_BASE+4)

//============================= smartmic page ===============================
#define IDC_SMARTMICPAGE_BUTTON_BASE        (IDC_BUTTON_BASE+55)
#define IDC_SMARTMICPAGE_EDIT_BASE          (IDC_EDIT_BASE+5)
#define IDC_SMARTMICPAGE_LISTVIEW_BASE      (IDC_LISTVIEW_BASE)
#define IDC_SMARTMICPAGE_STATIC_BASE        (IDC_STATIC_BASE+10)

#define IDC_BUTTON_SMARTMIC_SUPPORTWORD     (IDC_SMARTMICPAGE_BUTTON_BASE)
#define IDC_BUTTON_START_SMARTMIC           (IDC_SMARTMICPAGE_BUTTON_BASE+1)
#define IDC_BUTTON_STOP_SMARTMIC            (IDC_SMARTMICPAGE_BUTTON_BASE+2)

#define IDC_EDIT_DETECT                     (IDC_SMARTMICPAGE_EDIT_BASE)
#define IDC_LISTVIEW_TRAINING               (IDC_SMARTMICPAGE_LISTVIEW_BASE)
#define IDC_STATIC_TRAINING                 (IDC_SMARTMICPAGE_STATIC_BASE)

//============================= location page ===============================

//============================= other pages ================================

//============================= setting page ===============================
#define IDC_SETTINGPAGE_BUTTON_BASE         (IDC_BUTTON_BASE+100)
#define IDC_SETTINGPAGE_TRACKBAR_BASE       (IDC_TRACKBAR_BASE)
#define IDC_SETTINGPAGE_STATIC_BASE         (IDC_STATIC_BASE+30)
#define IDC_SETTINGPAGE_COMBOX_BASE         (IDC_COMBOX_BASE)
#define IDC_SETTINGPAGE_LISTVIEW_BASE       (IDC_LISTVIEW_BASE+5)

#define IDC_BUTTON_SOUND_SETTING            (IDC_SETTINGPAGE_BUTTON_BASE)
#define IDC_BUTTON_A_SETTING                (IDC_SETTINGPAGE_BUTTON_BASE+1)
#define IDC_BUTTON_B_SETTING                (IDC_SETTINGPAGE_BUTTON_BASE+2)
#define IDC_BUTTON_C_SETTING                (IDC_SETTINGPAGE_BUTTON_BASE+3)
#define IDC_BUTTON_D_SETTING                (IDC_SETTINGPAGE_BUTTON_BASE+4)
#define IDC_BUTTON_E_SETTING                (IDC_SETTINGPAGE_BUTTON_BASE+5)
#define IDC_BUTTON_F_SETTING                (IDC_SETTINGPAGE_BUTTON_BASE+6)

// sub page a of setting page
#define IDC_SUBPAGE_A_BUTTON_BASE           (IDC_SETTINGPAGE_BUTTON_BASE+10)
#define IDC_SUBPAGE_A_STATIC_BASE           (IDC_SETTINGPAGE_STATIC_BASE)
#define IDC_SUBPAGE_A_TRACKBAR_BASE         (IDC_SETTINGPAGE_TRACKBAR_BASE)
#define IDC_SUBPAGE_A_COMBOX_BASE           (IDC_SETTINGPAGE_COMBOX_BASE)

#define IDC_BUTTON_SOUND_TALK               (IDC_SUBPAGE_A_BUTTON_BASE)
#define IDC_BUTTON_SOUND_RINGTYPE           (IDC_SUBPAGE_A_BUTTON_BASE+1)
#define IDC_BUTTON_SOUND_ALARM              (IDC_SUBPAGE_A_BUTTON_BASE+2)
#define IDC_BUTTON_SOUND_OTHER              (IDC_SUBPAGE_A_BUTTON_BASE+3)
#define IDC_BUTTON_MIC_MUTE                 (IDC_SUBPAGE_A_BUTTON_BASE+4)        // 静音
#define IDC_BUTTON_SPK_MUTE                 (IDC_SUBPAGE_A_BUTTON_BASE+5)
#define IDC_BUTTON_RING_MUTE                (IDC_SUBPAGE_A_BUTTON_BASE+6)

#define IDC_STATIC_GROUP_TALK               (IDC_SUBPAGE_A_STATIC_BASE)
#define IDC_STATIC_VOLSPK                   (IDC_SUBPAGE_A_STATIC_BASE+1)
#define IDC_STATIC_VOLMIC                   (IDC_SUBPAGE_A_STATIC_BASE+2)
#define IDC_STATIC_MIC_MUTE                 (IDC_SUBPAGE_A_STATIC_BASE+3)       // 静音设置
#define IDC_STATIC_SPK_MUTE                 (IDC_SUBPAGE_A_STATIC_BASE+4)
#define IDC_STATIC_VTH                      (IDC_SUBPAGE_A_STATIC_BASE+5)
#define IDC_STATIC_VTO                      (IDC_SUBPAGE_A_STATIC_BASE+6)
#define IDC_STATIC_ALARM                    (IDC_SUBPAGE_A_STATIC_BASE+7)
#define IDC_STATIC_VTH_TIME                 (IDC_SUBPAGE_A_STATIC_BASE+8)
#define IDC_STATIC_VTO_TIME                 (IDC_SUBPAGE_A_STATIC_BASE+9)
#define IDC_STATIC_RING_MUTE                (IDC_SUBPAGE_A_STATIC_BASE+10)

#define IDC_TRACKBAR_VOLMIC                 (IDC_SUBPAGE_A_TRACKBAR_BASE)
#define IDC_TRACKBAR_VOLSPK                 (IDC_SUBPAGE_A_TRACKBAR_BASE+1)
#define IDC_TRACKBAR_VOLVTH                 (IDC_SUBPAGE_A_TRACKBAR_BASE+2)    // vth音量
#define IDC_TRACKBAR_VOLVTO                 (IDC_SUBPAGE_A_TRACKBAR_BASE+3)    // vto音量
#define IDC_TRACKBAR_VOLALARM               (IDC_SUBPAGE_A_TRACKBAR_BASE+4)    // alarm音量
#define IDC_TRACKBAR_VTH_TIME               (IDC_SUBPAGE_A_TRACKBAR_BASE+5)
#define IDC_TRACKBAR_VTO_TIME               (IDC_SUBPAGE_A_TRACKBAR_BASE+6)

#define IDC_VTH_RING_COMBOX                 (IDC_SUBPAGE_A_COMBOX_BASE)        // vth铃声选择
#define IDC_VTO_RING_COMBOX                 (IDC_SUBPAGE_A_COMBOX_BASE)        // vto铃声选择
#define IDC_ALARM_COMBOX                    (IDC_SUBPAGE_A_COMBOX_BASE+1)      // 报警铃声选择

// sub page b
#define IDC_SUBPAGE_B_LISTVIEW_BASE         (IDC_SETTINGPAGE_LISTVIEW_BASE)
#define IDC_SUBPAGE_B_STATIC_BASE           (IDC_SETTINGPAGE_STATIC_BASE+15)

#define IDC_STATIC_TESTLV                   (IDC_SUBPAGE_B_STATIC_BASE)
#define IDC_LISTVIEW_TEST                   (IDC_SUBPAGE_B_LISTVIEW_BASE)

// sub pages ...

// sub page f of setting page
#define IDC_SUBPAGE_F_BUTTON_BASE           (IDC_SETTINGPAGE_BUTTON_BASE+100)
#define IDC_SUBPAGE_F_STATIC_BASE           (IDC_SETTINGPAGE_STATIC_BASE+60)

#define IDC_BUTTON_RESTART                  (IDC_SUBPAGE_F_BUTTON_BASE)
#define IDC_STATIC_GROUP_MACHINE_INFO       (IDC_SUBPAGE_F_STATIC_BASE)
#define IDC_STATIC_SYS_VER_TITLE            (IDC_SUBPAGE_F_STATIC_BASE+1)
#define IDC_STATIC_SYS_VER                  (IDC_SUBPAGE_F_STATIC_BASE+2)
#define IDC_STATIC_MACHINE_VER_TITLE        (IDC_SUBPAGE_F_STATIC_BASE+3)
#define IDC_STATIC_MACHINE_VER              (IDC_SUBPAGE_F_STATIC_BASE+4)


//============================= test ===============================
#define IDC_TEST_BUTTON             1000
#define IDC_TEST_ICONFLOW           1100
#define IDC_TEST_ICONFLOW_EXIT      1101


#define IDC_BUTTON_TEST_START_GETES         (IDC_TEST_BUTTON+1)
#define IDC_BUTTON_TEST_STOP_GETES          (IDC_TEST_BUTTON+2)
#define IDC_BUTTON_TEST_CREATE_XMLCFG       (IDC_TEST_BUTTON+3)
#define IDC_BUTTON_TEST_PRASE_XMLCFG        (IDC_TEST_BUTTON+4)


#define BK_COLOR_KEY 0xFF112233

#define MSG_USER_SETTING (MSG_USER+1)

int ST_InitMiniGui(int argc, const char **args);
int ST_DeinitMiniGui(int not_used);
int ST_CreateMainWindow_New(int s32DispW, int s32DispH);

#endif //_MAIN_UI_H_
