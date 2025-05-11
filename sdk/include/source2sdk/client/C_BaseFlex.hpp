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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x980
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
            uint8_t _pad07f8[0x10]; // 0x7f8
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "12"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "1,000000"
            // metadata: MNetworkEncodeFlags "1"
            // m_flexWeight has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<float> m_flexWeight;
            char m_flexWeight[0x18]; // 0x808            
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "coord"
            // metadata: MNetworkChangeCallback "OnViewTargetChanged"
            Vector m_vLookTargetPosition; // 0x820            
            uint8_t _pad082c[0xc]; // 0x82c
            // metadata: MNetworkEnable
            bool m_blinktoggle; // 0x838            
            uint8_t _pad0839[0x5f]; // 0x839
            std::int32_t m_nLastFlexUpdateFrameCount; // 0x898            
            Vector m_CachedViewTarget; // 0x89c            
            source2sdk::client::SceneEventId_t m_nNextSceneEventId; // 0x8a8            
            std::int32_t m_iBlink; // 0x8ac            
            float m_blinktime; // 0x8b0            
            bool m_prevblinktoggle; // 0x8b4            
            source2sdk::modellib::AttachmentHandle_t m_iMouthAttachment; // 0x8b5            
            source2sdk::modellib::AttachmentHandle_t m_iEyeAttachment; // 0x8b6            
            bool m_bResetFlexWeightsOnModelChange; // 0x8b7            
            uint8_t _pad08b8[0x18]; // 0x8b8
            std::int32_t m_nEyeOcclusionRendererBone; // 0x8d0            
            matrix3x4_t m_mEyeOcclusionRendererCameraToBoneTransform; // 0x8d4            
            Vector m_vEyeOcclusionRendererHalfExtent; // 0x904            
            uint8_t _pad0910[0x10]; // 0x910
            source2sdk::client::C_BaseFlex_Emphasized_Phoneme m_PhonemeClasses[3]; // 0x920            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_BaseFlex because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_BaseFlex) == 0x980);
    };
};
