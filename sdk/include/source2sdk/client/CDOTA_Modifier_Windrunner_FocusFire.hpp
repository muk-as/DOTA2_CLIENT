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
        // Size: 0x18c0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Windrunner_FocusFire : public source2sdk::client::CDOTA_Buff
        {
        public:
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x1878            
            std::int32_t focusfire_damage_reduction; // 0x187c            
            bool bActive; // 0x1880            
            uint8_t _pad1881[0x3]; // 0x1881
            std::int32_t bonus_attack_speed; // 0x1884            
            std::int32_t focusfire_fire_on_the_move; // 0x1888            
            bool m_bPause; // 0x188c            
            uint8_t _pad188d[0x3]; // 0x188d
            std::int32_t m_nNumArrowsLanded; // 0x1890            
            std::int32_t m_nDamageDealt; // 0x1894            
            std::int32_t m_nDamageDealtMax; // 0x1898            
            std::int32_t m_nTargetInitialHP; // 0x189c            
            bool m_bHeroKilled; // 0x18a0            
            bool m_bRecentFocusFireAttack; // 0x18a1            
            bool m_bFocusFireProcessProcs; // 0x18a2            
            uint8_t _pad18a3[0x15]; // 0x18a3
            source2sdk::client::ParticleIndex_t m_nFXFocusFire; // 0x18b8            
            source2sdk::entity2::GameTime_t m_flLastFocusFireAttackTime; // 0x18bc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Windrunner_FocusFire because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Windrunner_FocusFire) == 0x18c0);
    };
};
