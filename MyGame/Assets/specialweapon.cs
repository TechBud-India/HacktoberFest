using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class specialweapon : MonoBehaviour
{
    public Transform specialFirePoint;
    public GameObject firePrefab;
    public GameObject special;
    public Transform Player;
    
    // Update is called once per frame
    void Update()
    {
        if (Input.GetButtonDown("Fire2"))
        {
            fire();
        }
        if(Input.GetButtonUp("Fire2"))
        {
            Destroy(special);
        }



    }

    void fire()
    {
        special = Instantiate(firePrefab, specialFirePoint.position, specialFirePoint.rotation);
        special.transform.SetParent(specialFirePoint);


    }
}
