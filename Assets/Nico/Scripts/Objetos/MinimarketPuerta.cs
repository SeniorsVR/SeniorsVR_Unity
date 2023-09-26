using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace nico
{

    public class MinimarketPuerta : MonoBehaviour
    {
        public bool Eseldelinicio = false;

        public routeMarker rm;

        public delegate void End();
        public static event End endEvent;

        private void OnTriggerEnter(Collider other)
        {

            if (other.CompareTag("Player"))
            {
                if (!Eseldelinicio)
                {
                    if (TestManager.enIda)
                    {
                        TestManager.SetIdaFlag(false);

                        TestManager.SetKioskoFlag(true);
                        TestManager.SetRecojerCanastoFlag(true);

                    }
                    else if (TestManager.enIrse && rm.back)
                    {
                        TestManager.SetIrseFlag(false);
                        TestManager.SetKioskoFlag(false);

                        TestManager.SetVueltaFlag(true);

                        //TestManager.PrintInLog();

                    }
                }
                else
                {
                    if (Eseldelinicio)
                    {
                        if (rm.back && TestManager.enVuelta)
                        {
                            TestManager.SetVueltaFlag(false);
                            if (endEvent != null)
                            {
                                endEvent();
                            }
                        }
                        else if (!TestManager.enTest) {
                            TestManager.Instance.StartTest();
                            print("test iniciado");
                        }
                    }
                }
            }
        }
    }
}