#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CSurvivorsEnemySnapshot.hpp"
#include "source2sdk/client/CSurvivorsPickupSnapshot.hpp"
#include "source2sdk/client/CSurvivorsPlayerSnapshot.hpp"
#include "source2sdk/client/SurvivorsGameModeID_t.hpp"

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
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CSurvivorsGameSnapshot
        {
        public:
            source2sdk::client::SurvivorsGameModeID_t m_gameModeID; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::CSurvivorsPlayerSnapshot m_playerSnapshot; // 0x_            
            // m_enemiesSnapshot has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CSurvivorsEnemySnapshot> m_enemiesSnapshot;
            char m_enemiesSnapshot[0x_]; // 0x_            
            // m_pickupsSnapshot has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CSurvivorsPickupSnapshot> m_pickupsSnapshot;
            char m_pickupsSnapshot[0x_]; // 0x_            
            float m_flGameTime; // 0x_            
            std::int32_t m_nCurrentLevelEvent; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CSurvivorsGameSnapshot, m_gameModeID) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsGameSnapshot, m_playerSnapshot) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsGameSnapshot, m_enemiesSnapshot) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsGameSnapshot, m_pickupsSnapshot) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsGameSnapshot, m_flGameTime) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsGameSnapshot, m_nCurrentLevelEvent) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CSurvivorsGameSnapshot) == 0x_);
    };
};
