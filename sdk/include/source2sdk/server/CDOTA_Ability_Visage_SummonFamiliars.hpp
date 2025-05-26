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
        // Size: 0x708
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Visage_SummonFamiliars : public source2sdk::server::CDOTABaseAbility
        {
        public:
            char szUnitName[260]; // 0x5c0            
            uint8_t _pad06c4[0x4]; // 0x6c4
            // m_hExistingUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hExistingUnits;
            char m_hExistingUnits[0x18]; // 0x6c8            
            uint8_t _pad06e0[0x28];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Visage_SummonFamiliars because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Visage_SummonFamiliars) == 0x708);
    };
};
