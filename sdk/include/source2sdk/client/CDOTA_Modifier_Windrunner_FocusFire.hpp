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
        // Size: 0x18d0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Windrunner_FocusFire : public source2sdk::client::CDOTA_Buff
        {
        public:
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x1888            
            std::int32_t focusfire_damage_reduction; // 0x188c            
            bool bActive; // 0x1890            
            uint8_t _pad1891[0x3]; // 0x1891
            std::int32_t bonus_attack_speed; // 0x1894            
            std::int32_t focusfire_fire_on_the_move; // 0x1898            
            bool m_bPause; // 0x189c            
            uint8_t _pad189d[0x3]; // 0x189d
            std::int32_t m_nNumArrowsLanded; // 0x18a0            
            std::int32_t m_nDamageDealt; // 0x18a4            
            std::int32_t m_nDamageDealtMax; // 0x18a8            
            std::int32_t m_nTargetInitialHP; // 0x18ac            
            bool m_bHeroKilled; // 0x18b0            
            bool m_bRecentFocusFireAttack; // 0x18b1            
            bool m_bFocusFireProcessProcs; // 0x18b2            
            uint8_t _pad18b3[0x15]; // 0x18b3
            source2sdk::client::ParticleIndex_t m_nFXFocusFire; // 0x18c8            
            source2sdk::entity2::GameTime_t m_flLastFocusFireAttackTime; // 0x18cc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Windrunner_FocusFire because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Windrunner_FocusFire) == 0x18d0);
    };
};
