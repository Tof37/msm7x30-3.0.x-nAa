/* FeraVolt */

void nt35580_lcd_device_add(void);
void mddi_nt35580_lcd_display_on(void);

#include "../../drivers/video/msm/msm_fb_panel.h"

struct tmd_wvga_platform_data {
        void (*power_on)(void);
        void (*power_off)(void);
        //void (*window_adjust)(u16 x1, u16 x2, u16 y1, u16 y2);
        void (*exit_deep_standby) (void);
        /*int dbc_on;
        int dbc_mode;*/
        struct msm_fb_panel_data *panel_data;
	struct panel_data_ext *panel_ext;
};
