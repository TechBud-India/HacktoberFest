using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class bulletproperty : MonoBehaviour
{
    // Damage is hardcoded to 30 
    public int damage = 30;
    
    // This is used whenever an object enters another object in space when the onTrigger porperty is ticked
    void OnTriggerEnter2D(Collider2D hitInfo)
    {
        enemyscript enemy = hitInfo.GetComponent<enemyscript>();
        enemy.TakeDamage(damage);
        Debug.Log("Hit");
        Destroy(gameObject);
    }
}
