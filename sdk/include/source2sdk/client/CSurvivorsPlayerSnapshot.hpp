#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CSurvivorsPowerUpSnapshot.hpp"
#include "source2sdk/client/SurvivorsHeroID_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x38
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CSurvivorsPlayerSnapshot
        {
        public:
            source2sdk::client::SurvivorsHeroID_t m_heroID; // 0x0            
            std::int32_t m_nCurrentLevel; // 0x4            
            float m_flCurrentExp; // 0x8            
            std::int32_t m_nRerollsRemaining; // 0xc            
            // m_vecPowerUps has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CSurvivorsPowerUpSnapshot> m_vecPowerUps;
            char m_vecPowerUps[0x18]; // 0x10            
            Vector m_vOrigin; // 0x28            
            uint8_t _pad0034[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CSurvivorsPlayerSnapshot, m_heroID) == 0x0);
        static_assert(offsetof(source2sdk::client::CSurvivorsPlayerSnapshot, m_nCurrentLevel) == 0x4);
        static_assert(offsetof(source2sdk::client::CSurvivorsPlayerSnapshot, m_flCurrentExp) == 0x8);
        static_assert(offsetof(source2sdk::client::CSurvivorsPlayerSnapshot, m_nRerollsRemaining) == 0xc);
        static_assert(offsetof(source2sdk::client::CSurvivorsPlayerSnapshot, m_vecPowerUps) == 0x10);
        static_assert(offsetof(source2sdk::client::CSurvivorsPlayerSnapshot, m_vOrigin) == 0x28);
        
        static_assert(sizeof(source2sdk::client::CSurvivorsPlayerSnapshot) == 0x38);
    };
};
