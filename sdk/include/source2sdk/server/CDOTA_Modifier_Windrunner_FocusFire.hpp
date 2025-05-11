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
        // Size: 0x1838
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Windrunner_FocusFire : public source2sdk::client::CDOTA_Buff
        {
        public:
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x17f8            
            std::int32_t focusfire_damage_reduction; // 0x17fc            
            bool bActive; // 0x1800            
            uint8_t _pad1801[0x3]; // 0x1801
            std::int32_t bonus_attack_speed; // 0x1804            
            std::int32_t focusfire_fire_on_the_move; // 0x1808            
            bool m_bPause; // 0x180c            
            uint8_t _pad180d[0x3]; // 0x180d
            std::int32_t m_nNumArrowsLanded; // 0x1810            
            std::int32_t m_nDamageDealt; // 0x1814            
            std::int32_t m_nDamageDealtMax; // 0x1818            
            std::int32_t m_nTargetInitialHP; // 0x181c            
            bool m_bHeroKilled; // 0x1820            
            bool m_bRecentFocusFireAttack; // 0x1821            
            bool m_bFocusFireProcessProcs; // 0x1822            
            uint8_t _pad1823[0x9]; // 0x1823
            source2sdk::client::ParticleIndex_t m_nFXFocusFire; // 0x182c            
            source2sdk::entity2::GameTime_t m_flLastFocusFireAttackTime; // 0x1830            
            uint8_t _pad1834[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Windrunner_FocusFire because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Windrunner_FocusFire) == 0x1838);
    };
};
