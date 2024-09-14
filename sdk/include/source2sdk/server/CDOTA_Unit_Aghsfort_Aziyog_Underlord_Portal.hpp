#pragma once
#include "source2sdk/server/CDOTA_BaseNPC_Additive.hpp"
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
    // Size: 0x1818
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Unit_Aghsfort_Aziyog_Underlord_Portal : public server::CDOTA_BaseNPC_Additive
    {
    public:
        // m_hOtherPortal has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hOtherPortal;
        char m_hOtherPortal[0x4]; // 0x1810        
        [[maybe_unused]] std::uint8_t pad_0x1814[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Unit_Aghsfort_Aziyog_Underlord_Portal because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Unit_Aghsfort_Aziyog_Underlord_Portal) == 0x1818);
};
