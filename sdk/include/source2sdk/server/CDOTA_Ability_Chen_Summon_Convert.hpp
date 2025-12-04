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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Chen_Summon_Convert : public source2sdk::server::CDOTABaseAbility
        {
        public:
            // m_hInnateUnit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hInnateUnit;
            char m_hInnateUnit[0x_]; // 0x_            
            bool m_bDeterminedFacet; // 0x_            
            bool summon_centaurs; // 0x_            
            bool summon_wolves; // 0x_            
            bool summon_hellbears; // 0x_            
            bool summon_trolls; // 0x_            
            bool summon_satyrs; // 0x_            
            bool summon_frogs; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Chen_Summon_Convert because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Chen_Summon_Convert) == 0x_);
    };
};
