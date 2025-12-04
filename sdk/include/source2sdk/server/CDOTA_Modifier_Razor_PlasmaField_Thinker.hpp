#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
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
        class CDOTA_Modifier_Razor_PlasmaField_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_fLastRadius; // 0x_            
            float m_fCurRadius; // 0x_            
            source2sdk::entity2::GameTime_t m_fLastThink; // 0x_            
            bool m_bContracting; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::server::CountdownTimer m_ViewerTimer; // 0x_            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_EntitiesHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_EntitiesHit;
            char m_EntitiesHit[0x_]; // 0x_            
            std::int32_t speed; // 0x_            
            float radius; // 0x_            
            float damage_min; // 0x_            
            float damage_max; // 0x_            
            std::int32_t slow_min; // 0x_            
            std::int32_t slow_max; // 0x_            
            float slow_duration; // 0x_            
            bool m_bHasCreatedFx; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float total_ability_time; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Razor_PlasmaField_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Razor_PlasmaField_Thinker) == 0x_);
    };
};
