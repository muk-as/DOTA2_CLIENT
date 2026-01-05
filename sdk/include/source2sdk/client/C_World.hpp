#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCTextureBase.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MNetworkVarNames "HMaterialStrong m_skyBoxFaces"
        // static metadata: MNetworkVarNames "HRenderTextureStrong m_hHeightFogTexture"
        // static metadata: MNetworkVarNames "HRenderTextureStrong m_hHeightFogMaskTexture"
        #pragma pack(push, 1)
        class C_World : public source2sdk::client::C_BaseModelEntity
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            // m_skyBoxFaces has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_skyBoxFaces[6];
            char m_skyBoxFaces[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            // m_hHeightFogTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_hHeightFogTexture;
            char m_hHeightFogTexture[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            // m_hHeightFogMaskTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_hHeightFogMaskTexture;
            char m_hHeightFogMaskTexture[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_World because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_World) == 0x_);
    };
};
