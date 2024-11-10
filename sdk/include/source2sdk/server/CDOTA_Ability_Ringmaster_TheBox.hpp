#pragma once
#include "source2sdk/server/CDOTABaseAbility.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x5e8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_Ringmaster_TheBox : public server::CDOTABaseAbility
    {
    public:
        bool m_bGrantedScepterCharges; // 0x5c8        
        [[maybe_unused]] std::uint8_t pad_0x5c9[0x7]; // 0x5c9
        // m_vecBoxedUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecBoxedUnits;
        char m_vecBoxedUnits[0x18]; // 0x5d0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Ringmaster_TheBox because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Ringmaster_TheBox) == 0x5e8);
};
