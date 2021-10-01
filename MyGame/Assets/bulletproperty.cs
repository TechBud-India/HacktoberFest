using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class bulletproperty : MonoBehaviour
{
    public int damage = 30;
    // Start is called before the first frame update
    void OnTriggerEnter2D(Collider2D hitInfo)
    {
        enemyscript enemy = hitInfo.GetComponent<enemyscript>();
        enemy.TakeDamage(damage);
        Debug.Log("Hit");
        Destroy(gameObject);
    }
}
