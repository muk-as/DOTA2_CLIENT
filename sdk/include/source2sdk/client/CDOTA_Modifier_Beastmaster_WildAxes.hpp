#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        // Size: 0x18a0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Beastmaster_WildAxes : public source2sdk::client::CDOTA_Buff
        {
        public:
            Vector m_vLeftControl; // 0x17f8            
            Vector m_vRightControl; // 0x1804            
            Vector m_vTargetLoc; // 0x1810            
            Vector m_vSourceLoc; // 0x181c            
            float m_flAxeDuration; // 0x1828            
            source2sdk::entity2::GameTime_t m_flAxeDieTime; // 0x182c            
            bool m_bReturning; // 0x1830            
            bool m_bCatchingAxes; // 0x1831            
            uint8_t _pad1832[0x6]; // 0x1832
            // m_hAxes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_hAxes;
            char m_hAxes[0x18]; // 0x1838            
            source2sdk::client::ParticleIndex_t m_nAxeFXIndex[2]; // 0x1850            
            // m_hHitList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_hHitList[2];
            char m_hHitList[0x30]; // 0x1858            
            float radius; // 0x1888            
            float spread; // 0x188c            
            float axe_damage; // 0x1890            
            float duration; // 0x1894            
            float min_throw_duration; // 0x1898            
            float max_throw_duration; // 0x189c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Beastmaster_WildAxes because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Beastmaster_WildAxes) == 0x18a0);
    };
};
