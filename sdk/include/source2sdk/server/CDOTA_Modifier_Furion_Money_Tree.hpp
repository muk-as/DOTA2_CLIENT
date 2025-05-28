#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CDOTA_TempTree;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x18c0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Furion_Money_Tree : public source2sdk::client::CDOTA_Buff
        {
        public:
            float gold_per_bag; // 0x1888            
            float tick_interval; // 0x188c            
            float tree_duration; // 0x1890            
            std::int32_t min_throw_range; // 0x1894            
            std::int32_t max_throw_range; // 0x1898            
            float gold_bag_duration; // 0x189c            
            std::int32_t bags_per_tick; // 0x18a0            
            float hero_level_gold_multiplier; // 0x18a4            
            // m_hTree has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTA_TempTree> m_hTree;
            char m_hTree[0x4]; // 0x18a8            
            std::int32_t nTargetHeroLevel; // 0x18ac            
            bool m_bInitialized; // 0x18b0            
            uint8_t _pad18b1[0x3]; // 0x18b1
            // m_hObstruction has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hObstruction;
            char m_hObstruction[0x4]; // 0x18b4            
            source2sdk::entity2::GameTime_t m_timeLastGoldBagSpawn; // 0x18b8            
            uint8_t _pad18bc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Furion_Money_Tree because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Furion_Money_Tree) == 0x18c0);
    };
};
