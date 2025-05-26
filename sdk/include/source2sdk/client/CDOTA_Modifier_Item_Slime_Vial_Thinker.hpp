#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/CountdownTimer.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x18c0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_Slime_Vial_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_fCurRadius; // 0x1878            
            source2sdk::entity2::GameTime_t m_fLastThink; // 0x187c            
            // m_entitiesHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_entitiesHit;
            char m_entitiesHit[0x18]; // 0x1880            
            source2sdk::client::CountdownTimer m_ViewerTimer; // 0x1898            
            std::int32_t spill_speed; // 0x18b0            
            std::int32_t spill_radius; // 0x18b4            
            std::int32_t spill_damage; // 0x18b8            
            float spill_debuff_duration; // 0x18bc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Slime_Vial_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Item_Slime_Vial_Thinker) == 0x18c0);
    };
};
