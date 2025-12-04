#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/SurvivorsEnemyID_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CSurvivorsEnemySnapshot
        {
        public:
            source2sdk::client::SurvivorsEnemyID_t m_enemyID; // 0x_            
            float m_flHealth; // 0x_            
            Vector m_vOrigin; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemySnapshot, m_enemyID) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemySnapshot, m_flHealth) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemySnapshot, m_vOrigin) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CSurvivorsEnemySnapshot) == 0x_);
    };
};
