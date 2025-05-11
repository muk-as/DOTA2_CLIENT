#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        // Size: 0x1858
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Snapfire_MortimerKisses : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_fIntervalPerRocket; // 0x17f8            
            float m_flFacingTarget; // 0x17fc            
            source2sdk::client::ParticleIndex_t m_nBeamFXIndex; // 0x1800            
            // m_hBeamEnd has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hBeamEnd;
            char m_hBeamEnd[0x4]; // 0x1804            
            float m_flCurDistance; // 0x1808            
            Vector m_vAimTarget; // 0x180c            
            float m_fLastTurnAmount; // 0x1818            
            std::int32_t m_nProjectilesLaunched; // 0x181c            
            bool m_bDestroyOnNextThink; // 0x1820            
            uint8_t _pad1821[0x3]; // 0x1821
            std::int32_t m_nProjectilesToLaunch; // 0x1824            
            bool m_bHasProjectileTalent; // 0x1828            
            uint8_t _pad1829[0x3]; // 0x1829
            std::int32_t projectile_count; // 0x182c            
            float projectile_speed; // 0x1830            
            float projectile_width; // 0x1834            
            float projectile_vision; // 0x1838            
            float turn_rate; // 0x183c            
            float min_range; // 0x1840            
            float impact_radius; // 0x1844            
            float min_lob_travel_time; // 0x1848            
            float max_lob_travel_time; // 0x184c            
            float delay_after_last_projectile; // 0x1850            
            uint8_t _pad1854[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Snapfire_MortimerKisses because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Snapfire_MortimerKisses) == 0x1858);
    };
};
