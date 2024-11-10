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
    // Size: 0x9d0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // 
    // static metadata: MNetworkVarNames "float32 m_flexWeight"
    // static metadata: MNetworkVarNames "bool m_blinktoggle"
    #pragma pack(push, 1)
    class C_BaseFlex : public client::C_BaseAnimatingOverlay
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x848[0x10]; // 0x848
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "12"
        // metadata: MNetworkMinValue "0,000000"
        // metadata: MNetworkMaxValue "1,000000"
        // metadata: MNetworkEncodeFlags "1"
        // m_flexWeight has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<float> m_flexWeight;
        char m_flexWeight[0x18]; // 0x858        
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "coord"
        // metadata: MNetworkChangeCallback "OnViewTargetChanged"
        Vector m_vLookTargetPosition; // 0x870        
        [[maybe_unused]] std::uint8_t pad_0x87c[0xc]; // 0x87c
        // metadata: MNetworkEnable
        bool m_blinktoggle; // 0x888        
        [[maybe_unused]] std::uint8_t pad_0x889[0x5f]; // 0x889
        int32_t m_nLastFlexUpdateFrameCount; // 0x8e8        
        Vector m_CachedViewTarget; // 0x8ec        
        client::SceneEventId_t m_nNextSceneEventId; // 0x8f8        
        int32_t m_iBlink; // 0x8fc        
        float m_blinktime; // 0x900        
        bool m_prevblinktoggle; // 0x904        
        modellib::AttachmentHandle_t m_iMouthAttachment; // 0x905        
        modellib::AttachmentHandle_t m_iEyeAttachment; // 0x906        
        bool m_bResetFlexWeightsOnModelChange; // 0x907        
        [[maybe_unused]] std::uint8_t pad_0x908[0x18]; // 0x908
        int32_t m_nEyeOcclusionRendererBone; // 0x920        
        matrix3x4_t m_mEyeOcclusionRendererCameraToBoneTransform; // 0x924        
        Vector m_vEyeOcclusionRendererHalfExtent; // 0x954        
        [[maybe_unused]] std::uint8_t pad_0x960[0x10]; // 0x960
        client::C_BaseFlex__Emphasized_Phoneme m_PhonemeClasses[3]; // 0x970        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_BaseFlex because it is not a standard-layout class
    static_assert(sizeof(C_BaseFlex) == 0x9d0);
};
