using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Weapon : MonoBehaviour
{
    public Transform firePoint;
    public GameObject BulletPrefab;
    public float bulletSpeed = 20f;
    


    // Update is called once per frame
    private void Update()
    {
        
    }

    void Shoot()
    {
        GameObject bullet = Instantiate(BulletPrefab, firePoint.position, firePoint.rotation);
        Rigidbody2D rb2d = bullet.GetComponent<Rigidbody2D>();
        rb2d.AddForce(firePoint.right * bulletSpeed, ForceMode2D.Impulse);

    }

    
}
