#pragma once
#include "source2sdk/client/SurvivorsEnemyID_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x4
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x14
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MVDataRoot
    #pragma pack(push, 1)
    class CSurvivorsEnemySnapshot
    {
    public:
        client::SurvivorsEnemyID_t m_enemyID; // 0x0        
        float m_flHealth; // 0x4        
        Vector m_vOrigin; // 0x8        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CSurvivorsEnemySnapshot, m_enemyID) == 0x0);
    static_assert(offsetof(CSurvivorsEnemySnapshot, m_flHealth) == 0x4);
    static_assert(offsetof(CSurvivorsEnemySnapshot, m_vOrigin) == 0x8);
    
    static_assert(sizeof(CSurvivorsEnemySnapshot) == 0x14);
};
