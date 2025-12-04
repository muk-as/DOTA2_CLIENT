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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Beastmaster_WildAxes : public source2sdk::client::CDOTA_Buff
        {
        public:
            Vector m_vLeftControl; // 0x_            
            Vector m_vRightControl; // 0x_            
            Vector m_vTargetLoc; // 0x_            
            Vector m_vSourceLoc; // 0x_            
            float m_flAxeDuration; // 0x_            
            source2sdk::entity2::GameTime_t m_flAxeDieTime; // 0x_            
            bool m_bReturning; // 0x_            
            bool m_bCatchingAxes; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_hAxes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_hAxes;
            char m_hAxes[0x_]; // 0x_            
            source2sdk::client::ParticleIndex_t m_nAxeFXIndex[2]; // 0x_            
            // m_hHitList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_hHitList[2];
            char m_hHitList[0x_]; // 0x_            
            float radius; // 0x_            
            float spread; // 0x_            
            float axe_damage; // 0x_            
            float duration; // 0x_            
            float min_throw_duration; // 0x_            
            float max_throw_duration; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Beastmaster_WildAxes because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Beastmaster_WildAxes) == 0x_);
    };
};
