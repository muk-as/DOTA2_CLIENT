#pragma once
#include "source2sdk/client/C_DynamicProp.hpp"
#include "source2sdk/client/PlayerID_t.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xb10
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "bool m_bUseAvatar"
    #pragma pack(push, 1)
    class CDOTAPropConsumableBanner : public client::C_DynamicProp
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xab0[0x48]; // 0xab0
        client::PlayerID_t m_nPlayerID; // 0xaf8        
        [[maybe_unused]] std::uint8_t pad_0xafc[0x4]; // 0xafc
        // m_hAvatarTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_hAvatarTexture;
        char m_hAvatarTexture[0x8]; // 0xb00        
        // metadata: MNetworkEnable
        bool m_bUseAvatar; // 0xb08        
        [[maybe_unused]] std::uint8_t pad_0xb09[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTAPropConsumableBanner because it is not a standard-layout class
    static_assert(sizeof(CDOTAPropConsumableBanner) == 0xb10);
};
