#pragma once
#include "source2sdk/client/C_DOTA_BaseNPC_Additive.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1808
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_DOTA_Unit_Aghsfort_Aziyog_Underlord_Portal : public client::C_DOTA_BaseNPC_Additive
    {
    public:
        // m_hOtherPortal has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hOtherPortal;
        char m_hOtherPortal[0x4]; // 0x1800        
        [[maybe_unused]] std::uint8_t pad_0x1804[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Unit_Aghsfort_Aziyog_Underlord_Portal because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Unit_Aghsfort_Aziyog_Underlord_Portal) == 0x1808);
};
