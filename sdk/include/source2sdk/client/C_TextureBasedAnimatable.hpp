#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseModelEntity.hpp"
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
        // Size: 0x9a8
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MNetworkVarNames "bool m_bLoop"
        // static metadata: MNetworkVarNames "float m_flFPS"
        // static metadata: MNetworkVarNames "HRenderTextureStrong m_hPositionKeys"
        // static metadata: MNetworkVarNames "HRenderTextureStrong m_hRotationKeys"
        // static metadata: MNetworkVarNames "Vector m_vAnimationBoundsMin"
        // static metadata: MNetworkVarNames "Vector m_vAnimationBoundsMax"
        // static metadata: MNetworkVarNames "float m_flStartTime"
        // static metadata: MNetworkVarNames "float m_flStartFrame"
        #pragma pack(push, 1)
        class C_TextureBasedAnimatable : public source2sdk::client::C_BaseModelEntity
        {
        public:
            // metadata: MNetworkEnable
            bool m_bLoop; // 0x970            
            uint8_t _pad0971[0x3]; // 0x971
            // metadata: MNetworkEnable
            float m_flFPS; // 0x974            
            // metadata: MNetworkEnable
            // m_hPositionKeys has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_hPositionKeys;
            char m_hPositionKeys[0x8]; // 0x978            
            // metadata: MNetworkEnable
            // m_hRotationKeys has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_hRotationKeys;
            char m_hRotationKeys[0x8]; // 0x980            
            // metadata: MNetworkEnable
            Vector m_vAnimationBoundsMin; // 0x988            
            // metadata: MNetworkEnable
            Vector m_vAnimationBoundsMax; // 0x994            
            // metadata: MNetworkEnable
            float m_flStartTime; // 0x9a0            
            // metadata: MNetworkEnable
            float m_flStartFrame; // 0x9a4            
            
            // Datamap fields:
            // void InputStart; // 0x0
            // void InputStop; // 0x0
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_TextureBasedAnimatable because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_TextureBasedAnimatable) == 0x9a8);
    };
};
