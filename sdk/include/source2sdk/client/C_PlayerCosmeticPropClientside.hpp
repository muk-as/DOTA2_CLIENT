#pragma once
#include "source2sdk/client/C_DynamicPropClientside.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCTextureBase.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_EconItemView;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xce8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class C_PlayerCosmeticPropClientside : public client::C_DynamicPropClientside
    {
    public:
        int32_t m_iPlayerNum; // 0xb08        
        int32_t m_iCosmeticType; // 0xb0c        
        char m_szProxyTextureName[260]; // 0xb10        
        [[maybe_unused]] std::uint8_t pad_0xc14[0x4]; // 0xc14
        // m_hProxyTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_hProxyTexture;
        char m_hProxyTexture[0x8]; // 0xc18        
        [[maybe_unused]] std::uint8_t pad_0xc20[0xa0]; // 0xc20
        bool m_bGeneratedShowcaseProps; // 0xcc0        
        [[maybe_unused]] std::uint8_t pad_0xcc1[0x7]; // 0xcc1
        // m_vecShowcaseProps has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::C_PlayerCosmeticPropClientside*> m_vecShowcaseProps;
        char m_vecShowcaseProps[0x18]; // 0xcc8        
        client::C_EconItemView* m_pShowcaseItem; // 0xce0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_PlayerCosmeticPropClientside because it is not a standard-layout class
    static_assert(sizeof(C_PlayerCosmeticPropClientside) == 0xce8);
};
