#pragma once
#include "source2sdk/client/C_BaseAnimatingOverlay.hpp"
#include "source2sdk/client/C_BaseFlex__Emphasized_Phoneme.hpp"
#include "source2sdk/client/SceneEventId_t.hpp"
#include "source2sdk/modellib/AttachmentHandle_t.hpp"
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
    // Size: 0x988
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "float32 m_flexWeight"
    // static metadata: MNetworkVarNames "bool m_blinktoggle"
    #pragma pack(push, 1)
    class C_BaseFlex : public client::C_BaseAnimatingOverlay
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x800[0x10]; // 0x800
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "12"
        // metadata: MNetworkMinValue "0,000000"
        // metadata: MNetworkMaxValue "1,000000"
        // metadata: MNetworkEncodeFlags "1"
        // m_flexWeight has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<float> m_flexWeight;
        char m_flexWeight[0x18]; // 0x810        
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "coord"
        // metadata: MNetworkChangeCallback "OnViewTargetChanged"
        Vector m_vLookTargetPosition; // 0x828        
        [[maybe_unused]] std::uint8_t pad_0x834[0xc]; // 0x834
        // metadata: MNetworkEnable
        bool m_blinktoggle; // 0x840        
        [[maybe_unused]] std::uint8_t pad_0x841[0x5f]; // 0x841
        int32_t m_nLastFlexUpdateFrameCount; // 0x8a0        
        Vector m_CachedViewTarget; // 0x8a4        
        client::SceneEventId_t m_nNextSceneEventId; // 0x8b0        
        int32_t m_iBlink; // 0x8b4        
        float m_blinktime; // 0x8b8        
        bool m_prevblinktoggle; // 0x8bc        
        modellib::AttachmentHandle_t m_iMouthAttachment; // 0x8bd        
        modellib::AttachmentHandle_t m_iEyeAttachment; // 0x8be        
        bool m_bResetFlexWeightsOnModelChange; // 0x8bf        
        [[maybe_unused]] std::uint8_t pad_0x8c0[0x18]; // 0x8c0
        int32_t m_nEyeOcclusionRendererBone; // 0x8d8        
        matrix3x4_t m_mEyeOcclusionRendererCameraToBoneTransform; // 0x8dc        
        Vector m_vEyeOcclusionRendererHalfExtent; // 0x90c        
        [[maybe_unused]] std::uint8_t pad_0x918[0x10]; // 0x918
        client::C_BaseFlex__Emphasized_Phoneme m_PhonemeClasses[3]; // 0x928        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_BaseFlex because it is not a standard-layout class
    static_assert(sizeof(C_BaseFlex) == 0x988);
};
