#pragma once
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/client/C_RopeKeyframe__CPhysicsDelegate.hpp"
#include "source2sdk/modellib/AttachmentHandle_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xbc0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkNoBase
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkIncludeByUserGroup "Origin"
    // static metadata: MNetworkIncludeByName "CGameSceneNode::m_hParent"
    // static metadata: MNetworkIncludeByName "CGameSceneNode::m_hierarchyAttachName"
    // static metadata: MNetworkIncludeByName "m_nMinCPULevel"
    // static metadata: MNetworkIncludeByName "m_nMaxCPULevel"
    // static metadata: MNetworkIncludeByName "m_nMinGPULevel"
    // static metadata: MNetworkIncludeByName "m_nMaxGPULevel"
    // static metadata: MNetworkVarNames "float32 m_flScrollSpeed"
    // static metadata: MNetworkVarNames "uint16 m_RopeFlags"
    // static metadata: MNetworkVarNames "HMaterialStrong m_iRopeMaterialModelIndex"
    // static metadata: MNetworkVarNames "uint8 m_nSegments"
    // static metadata: MNetworkVarNames "CHandle< C_BaseEntity> m_hStartPoint"
    // static metadata: MNetworkVarNames "CHandle< C_BaseEntity> m_hEndPoint"
    // static metadata: MNetworkVarNames "AttachmentHandle_t m_iStartAttachment"
    // static metadata: MNetworkVarNames "AttachmentHandle_t m_iEndAttachment"
    // static metadata: MNetworkVarNames "uint8 m_Subdiv"
    // static metadata: MNetworkVarNames "int16 m_RopeLength"
    // static metadata: MNetworkVarNames "int16 m_Slack"
    // static metadata: MNetworkVarNames "float32 m_TextureScale"
    // static metadata: MNetworkVarNames "uint8 m_fLockedPoints"
    // static metadata: MNetworkVarNames "uint8 m_nChangeCount"
    // static metadata: MNetworkVarNames "float32 m_Width"
    // static metadata: MNetworkVarNames "bool m_bConstrainBetweenEndpoints"
    #pragma pack(push, 1)
    class C_RopeKeyframe : public client::C_BaseModelEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x7d8[0x8]; // 0x7d8
        // m_LinksTouchingSomething has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CBitVec<10> m_LinksTouchingSomething;
        char m_LinksTouchingSomething[0x4]; // 0x7e0        
        int32_t m_nLinksTouchingSomething; // 0x7e4        
        bool m_bApplyWind; // 0x7e8        
        [[maybe_unused]] std::uint8_t pad_0x7e9[0x3]; // 0x7e9
        int32_t m_fPrevLockedPoints; // 0x7ec        
        int32_t m_iForcePointMoveCounter; // 0x7f0        
        bool m_bPrevEndPointPos[2]; // 0x7f4        
        [[maybe_unused]] std::uint8_t pad_0x7f6[0x2]; // 0x7f6
        Vector m_vPrevEndPointPos[2]; // 0x7f8        
        float m_flCurScroll; // 0x810        
        // metadata: MNetworkEnable
        float m_flScrollSpeed; // 0x814        
        // metadata: MNetworkEnable
        uint16_t m_RopeFlags; // 0x818        
        [[maybe_unused]] std::uint8_t pad_0x81a[0x6]; // 0x81a
        // metadata: MNetworkEnable
        // m_iRopeMaterialModelIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_iRopeMaterialModelIndex;
        char m_iRopeMaterialModelIndex[0x8]; // 0x820        
        [[maybe_unused]] std::uint8_t pad_0x828[0x270]; // 0x828
        Vector m_LightValues[10]; // 0xa98        
        // metadata: MNetworkEnable
        uint8_t m_nSegments; // 0xb10        
        [[maybe_unused]] std::uint8_t pad_0xb11[0x3]; // 0xb11
        // metadata: MNetworkEnable
        // m_hStartPoint has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hStartPoint;
        char m_hStartPoint[0x4]; // 0xb14        
        // metadata: MNetworkEnable
        // m_hEndPoint has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hEndPoint;
        char m_hEndPoint[0x4]; // 0xb18        
        // metadata: MNetworkEnable
        modellib::AttachmentHandle_t m_iStartAttachment; // 0xb1c        
        // metadata: MNetworkEnable
        modellib::AttachmentHandle_t m_iEndAttachment; // 0xb1d        
        // metadata: MNetworkEnable
        uint8_t m_Subdiv; // 0xb1e        
        [[maybe_unused]] std::uint8_t pad_0xb1f[0x1]; // 0xb1f
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RecomputeSprings"
        int16_t m_RopeLength; // 0xb20        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RecomputeSprings"
        int16_t m_Slack; // 0xb22        
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "10"
        // metadata: MNetworkMinValue "0,100000"
        // metadata: MNetworkMaxValue "10,000000"
        float m_TextureScale; // 0xb24        
        // metadata: MNetworkEnable
        uint8_t m_fLockedPoints; // 0xb28        
        // metadata: MNetworkEnable
        uint8_t m_nChangeCount; // 0xb29        
        [[maybe_unused]] std::uint8_t pad_0xb2a[0x2]; // 0xb2a
        // metadata: MNetworkEnable
        float m_Width; // 0xb2c        
        client::C_RopeKeyframe__CPhysicsDelegate m_PhysicsDelegate; // 0xb30        
        // m_hMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_hMaterial;
        char m_hMaterial[0x8]; // 0xb40        
        int32_t m_TextureHeight; // 0xb48        
        Vector m_vecImpulse; // 0xb4c        
        Vector m_vecPreviousImpulse; // 0xb58        
        float m_flCurrentGustTimer; // 0xb64        
        float m_flCurrentGustLifetime; // 0xb68        
        float m_flTimeToNextGust; // 0xb6c        
        Vector m_vWindDir; // 0xb70        
        Vector m_vColorMod; // 0xb7c        
        Vector m_vCachedEndPointAttachmentPos[2]; // 0xb88        
        QAngle m_vCachedEndPointAttachmentAngle[2]; // 0xba0        
        // metadata: MNetworkEnable
        bool m_bConstrainBetweenEndpoints; // 0xbb8        
        // start of bitfield block at 0xbb9
        uint8_t m_bEndPointAttachmentPositionsDirty: 1;
        uint8_t m_bEndPointAttachmentAnglesDirty: 1;
        uint8_t m_bNewDataThisFrame: 1;
        uint8_t m_bPhysicsInitted: 1;
        // end of bitfield block // 4 bits
        [[maybe_unused]] std::uint8_t pad_0xbba[0x6];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_RopeKeyframe because it is not a standard-layout class
    static_assert(sizeof(C_RopeKeyframe) == 0xbc0);
};
