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
    // Size: 0xc08
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkNoBase
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
        [[maybe_unused]] std::uint8_t pad_0x820[0x8]; // 0x820
        // m_LinksTouchingSomething has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CBitVec<10> m_LinksTouchingSomething;
        char m_LinksTouchingSomething[0x4]; // 0x828        
        int32_t m_nLinksTouchingSomething; // 0x82c        
        bool m_bApplyWind; // 0x830        
        [[maybe_unused]] std::uint8_t pad_0x831[0x3]; // 0x831
        int32_t m_fPrevLockedPoints; // 0x834        
        int32_t m_iForcePointMoveCounter; // 0x838        
        bool m_bPrevEndPointPos[2]; // 0x83c        
        [[maybe_unused]] std::uint8_t pad_0x83e[0x2]; // 0x83e
        Vector m_vPrevEndPointPos[2]; // 0x840        
        float m_flCurScroll; // 0x858        
        // metadata: MNetworkEnable
        float m_flScrollSpeed; // 0x85c        
        // metadata: MNetworkEnable
        uint16_t m_RopeFlags; // 0x860        
        [[maybe_unused]] std::uint8_t pad_0x862[0x6]; // 0x862
        // metadata: MNetworkEnable
        // m_iRopeMaterialModelIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_iRopeMaterialModelIndex;
        char m_iRopeMaterialModelIndex[0x8]; // 0x868        
        [[maybe_unused]] std::uint8_t pad_0x870[0x270]; // 0x870
        Vector m_LightValues[10]; // 0xae0        
        // metadata: MNetworkEnable
        uint8_t m_nSegments; // 0xb58        
        [[maybe_unused]] std::uint8_t pad_0xb59[0x3]; // 0xb59
        // metadata: MNetworkEnable
        // m_hStartPoint has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hStartPoint;
        char m_hStartPoint[0x4]; // 0xb5c        
        // metadata: MNetworkEnable
        // m_hEndPoint has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hEndPoint;
        char m_hEndPoint[0x4]; // 0xb60        
        // metadata: MNetworkEnable
        modellib::AttachmentHandle_t m_iStartAttachment; // 0xb64        
        // metadata: MNetworkEnable
        modellib::AttachmentHandle_t m_iEndAttachment; // 0xb65        
        // metadata: MNetworkEnable
        uint8_t m_Subdiv; // 0xb66        
        [[maybe_unused]] std::uint8_t pad_0xb67[0x1]; // 0xb67
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RecomputeSprings"
        int16_t m_RopeLength; // 0xb68        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RecomputeSprings"
        int16_t m_Slack; // 0xb6a        
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "10"
        // metadata: MNetworkMinValue "0,100000"
        // metadata: MNetworkMaxValue "10,000000"
        float m_TextureScale; // 0xb6c        
        // metadata: MNetworkEnable
        uint8_t m_fLockedPoints; // 0xb70        
        // metadata: MNetworkEnable
        uint8_t m_nChangeCount; // 0xb71        
        [[maybe_unused]] std::uint8_t pad_0xb72[0x2]; // 0xb72
        // metadata: MNetworkEnable
        float m_Width; // 0xb74        
        client::C_RopeKeyframe__CPhysicsDelegate m_PhysicsDelegate; // 0xb78        
        // m_hMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_hMaterial;
        char m_hMaterial[0x8]; // 0xb88        
        int32_t m_TextureHeight; // 0xb90        
        Vector m_vecImpulse; // 0xb94        
        Vector m_vecPreviousImpulse; // 0xba0        
        float m_flCurrentGustTimer; // 0xbac        
        float m_flCurrentGustLifetime; // 0xbb0        
        float m_flTimeToNextGust; // 0xbb4        
        Vector m_vWindDir; // 0xbb8        
        Vector m_vColorMod; // 0xbc4        
        Vector m_vCachedEndPointAttachmentPos[2]; // 0xbd0        
        QAngle m_vCachedEndPointAttachmentAngle[2]; // 0xbe8        
        // metadata: MNetworkEnable
        bool m_bConstrainBetweenEndpoints; // 0xc00        
        // start of bitfield block at 0xc01
        uint8_t m_bEndPointAttachmentPositionsDirty: 1;
        uint8_t m_bEndPointAttachmentAnglesDirty: 1;
        uint8_t m_bNewDataThisFrame: 1;
        uint8_t m_bPhysicsInitted: 1;
        // end of bitfield block // 4 bits
        [[maybe_unused]] std::uint8_t pad_0xc02[0x6];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_RopeKeyframe because it is not a standard-layout class
    static_assert(sizeof(C_RopeKeyframe) == 0xc08);
};
