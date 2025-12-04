#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Windrunner_FocusFire : public source2sdk::client::CDOTA_Buff
        {
        public:
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x_]; // 0x_            
            std::int32_t focusfire_damage_reduction; // 0x_            
            bool bActive; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t bonus_attack_speed; // 0x_            
            std::int32_t focusfire_fire_on_the_move; // 0x_            
            bool m_bPause; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_nNumArrowsLanded; // 0x_            
            std::int32_t m_nDamageDealt; // 0x_            
            std::int32_t m_nDamageDealtMax; // 0x_            
            std::int32_t m_nTargetInitialHP; // 0x_            
            bool m_bHeroKilled; // 0x_            
            bool m_bRecentFocusFireAttack; // 0x_            
            bool m_bFocusFireProcessProcs; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::ParticleIndex_t m_nFXFocusFire; // 0x_            
            source2sdk::entity2::GameTime_t m_flLastFocusFireAttackTime; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Windrunner_FocusFire because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Windrunner_FocusFire) == 0x_);
    };
};
