#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DynamicProp.hpp"
#include "source2sdk/client/PlayerID_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCTextureBase.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xb08
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "bool m_bUseAvatar"
        #pragma pack(push, 1)
        class CDOTAPropConsumableBanner : public source2sdk::client::C_DynamicProp
        {
        public:
            uint8_t _pad0aa8[0x48]; // 0xaa8
            source2sdk::client::PlayerID_t m_nPlayerID; // 0xaf0            
            uint8_t _pad0af4[0x4]; // 0xaf4
            // m_hAvatarTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_hAvatarTexture;
            char m_hAvatarTexture[0x8]; // 0xaf8            
            // metadata: MNetworkEnable
            bool m_bUseAvatar; // 0xb00            
            uint8_t _pad0b01[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTAPropConsumableBanner because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTAPropConsumableBanner) == 0xb08);
    };
};
