#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CDOTABaseAbility.hpp"
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x5e8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Nevermore_Requiem : public source2sdk::server::CDOTABaseAbility
        {
        public:
            float requiem_line_width_start; // 0x5b8            
            float requiem_line_width_end; // 0x5bc            
            std::int32_t m_nCachedSouls; // 0x5c0            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x5c4            
            std::int32_t m_nKilleater_nLines; // 0x5c8            
            uint8_t _pad05cc[0x4]; // 0x5cc
            // m_vecHeroesReqd has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecHeroesReqd;
            char m_vecHeroesReqd[0x18]; // 0x5d0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Nevermore_Requiem because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Nevermore_Requiem) == 0x5e8);
    };
};
