#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseAnimatingOverlay.hpp"
#include "source2sdk/client/C_BaseFlex_Emphasized_Phoneme.hpp"
#include "source2sdk/client/SceneEventId_t.hpp"
#include "source2sdk/modellib/AttachmentHandle_t.hpp"

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
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "float32 m_flexWeight"
        // static metadata: MNetworkVarNames "bool m_blinktoggle"
        #pragma pack(push, 1)
        class C_BaseFlex : public source2sdk::client::C_BaseAnimatingOverlay
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "12"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "1,000000"
            // metadata: MNetworkEncodeFlags "1"
            // m_flexWeight has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<float> m_flexWeight;
            char m_flexWeight[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "coord"
            // metadata: MNetworkChangeCallback "OnViewTargetChanged"
            Vector m_vLookTargetPosition; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            bool m_blinktoggle; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_nLastFlexUpdateFrameCount; // 0x_            
            Vector m_CachedViewTarget; // 0x_            
            source2sdk::client::SceneEventId_t m_nNextSceneEventId; // 0x_            
            std::int32_t m_iBlink; // 0x_            
            float m_blinktime; // 0x_            
            bool m_prevblinktoggle; // 0x_            
            source2sdk::modellib::AttachmentHandle_t m_iMouthAttachment; // 0x_            
            source2sdk::modellib::AttachmentHandle_t m_iEyeAttachment; // 0x_            
            bool m_bResetFlexWeightsOnModelChange; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_nEyeOcclusionRendererBone; // 0x_            
            matrix3x4_t m_mEyeOcclusionRendererCameraToBoneTransform; // 0x_            
            Vector m_vEyeOcclusionRendererHalfExtent; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::C_BaseFlex_Emphasized_Phoneme m_PhonemeClasses[3]; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_BaseFlex because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_BaseFlex) == 0x_);
    };
};
