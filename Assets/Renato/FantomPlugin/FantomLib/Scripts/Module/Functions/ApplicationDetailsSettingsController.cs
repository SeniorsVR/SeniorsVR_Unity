﻿namespace FantomLib
{
    /// <summary>
    /// Application Details Settings Controller
    /// 
    ///･Open this Application Details settings.
    ///
    ///・現在アプリの詳細設定画面を開く。
    /// </summary>
    public class ApplicationDetailsSettingsController : ActionURIOnThisPackageBase
    {
        protected override string action {
            get { return "android.settings.APPLICATION_DETAILS_SETTINGS"; }
        }

    }
}
