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
        // Size: 0x5c8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Chen_Summon_Convert : public source2sdk::server::CDOTABaseAbility
        {
        public:
            // m_hInnateUnit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hInnateUnit;
            char m_hInnateUnit[0x4]; // 0x5b8            
            bool m_bDeterminedFacet; // 0x5bc            
            bool summon_centaurs; // 0x5bd            
            bool summon_wolves; // 0x5be            
            bool summon_hellbears; // 0x5bf            
            bool summon_trolls; // 0x5c0            
            bool summon_satyrs; // 0x5c1            
            bool summon_frogs; // 0x5c2            
            uint8_t _pad05c3[0x5];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Chen_Summon_Convert because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Chen_Summon_Convert) == 0x5c8);
    };
};
