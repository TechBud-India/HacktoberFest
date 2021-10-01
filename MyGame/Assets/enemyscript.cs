using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class enemyscript : MonoBehaviour
{
    public int health = 100;
    public int damage = 30;
    
    

    public void TakeDamage(int damage)
    {
        health = health - damage;

        if (health <= 0)
        {
            Die();
        }

        
    }

    void Die()
    {
        Debug.Log("Ded");
        Destroy(gameObject);
    }

    void OnTriggerEnter2D(Collider2D hitInfo)
    {
        playerdamage player = hitInfo.GetComponent<playerdamage>();
        player.TakeDamage(damage);
        Debug.Log("Hit");
        Destroy(gameObject);
    }


}
