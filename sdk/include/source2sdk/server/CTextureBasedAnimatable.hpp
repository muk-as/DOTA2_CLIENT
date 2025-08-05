#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeCTextureBase.hpp"
#include "source2sdk/server/CBaseModelEntity.hpp"

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
        // Size: 0x828
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
        class CTextureBasedAnimatable : public source2sdk::server::CBaseModelEntity
        {
        public:
            // metadata: MNetworkEnable
            bool m_bLoop; // 0x7f0            
            uint8_t _pad07f1[0x3]; // 0x7f1
            // metadata: MNetworkEnable
            float m_flFPS; // 0x7f4            
            // metadata: MNetworkEnable
            // m_hPositionKeys has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_hPositionKeys;
            char m_hPositionKeys[0x8]; // 0x7f8            
            // metadata: MNetworkEnable
            // m_hRotationKeys has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_hRotationKeys;
            char m_hRotationKeys[0x8]; // 0x800            
            // metadata: MNetworkEnable
            Vector m_vAnimationBoundsMin; // 0x808            
            // metadata: MNetworkEnable
            Vector m_vAnimationBoundsMax; // 0x814            
            // metadata: MNetworkEnable
            float m_flStartTime; // 0x820            
            // metadata: MNetworkEnable
            float m_flStartFrame; // 0x824            
            
            // Datamap fields:
            // void InputStart; // 0x0
            // void InputStop; // 0x0
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTextureBasedAnimatable because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CTextureBasedAnimatable) == 0x828);
    };
};
