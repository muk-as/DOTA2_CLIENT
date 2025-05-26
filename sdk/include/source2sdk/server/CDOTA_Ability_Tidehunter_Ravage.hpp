#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        // Size: 0x5e0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Tidehunter_Ravage : public source2sdk::server::CDOTABaseAbility
        {
        public:
            // m_hEntsHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hEntsHit;
            char m_hEntsHit[0x18]; // 0x5c0            
            bool m_bAwardedKillEater; // 0x5d8            
            uint8_t _pad05d9[0x3]; // 0x5d9
            float duration; // 0x5dc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Tidehunter_Ravage because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Tidehunter_Ravage) == 0x5e0);
    };
};
