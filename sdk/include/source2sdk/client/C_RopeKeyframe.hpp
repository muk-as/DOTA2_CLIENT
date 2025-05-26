#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/client/C_RopeKeyframe_CPhysicsDelegate.hpp"
#include "source2sdk/modellib/AttachmentHandle_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

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
        // Size: 0xce0
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
        class C_RopeKeyframe : public source2sdk::client::C_BaseModelEntity
        {
        public:
            uint8_t _pad0970[0x8]; // 0x970
            // m_LinksTouchingSomething has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CBitVec<10> m_LinksTouchingSomething;
            char m_LinksTouchingSomething[0x4]; // 0x978            
            std::int32_t m_nLinksTouchingSomething; // 0x97c            
            bool m_bApplyWind; // 0x980            
            uint8_t _pad0981[0x3]; // 0x981
            std::int32_t m_fPrevLockedPoints; // 0x984            
            std::int32_t m_iForcePointMoveCounter; // 0x988            
            bool m_bPrevEndPointPos[2]; // 0x98c            
            uint8_t _pad098e[0x2]; // 0x98e
            Vector m_vPrevEndPointPos[2]; // 0x990            
            float m_flCurScroll; // 0x9a8            
            // metadata: MNetworkEnable
            float m_flScrollSpeed; // 0x9ac            
            // metadata: MNetworkEnable
            std::uint16_t m_RopeFlags; // 0x9b0            
            uint8_t _pad09b2[0x6]; // 0x9b2
            // metadata: MNetworkEnable
            // m_iRopeMaterialModelIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_iRopeMaterialModelIndex;
            char m_iRopeMaterialModelIndex[0x8]; // 0x9b8            
            uint8_t _pad09c0[0x270]; // 0x9c0
            // metadata: MNetworkEnable
            std::uint8_t m_nSegments; // 0xc30            
            uint8_t _pad0c31[0x3]; // 0xc31
            // metadata: MNetworkEnable
            // m_hStartPoint has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hStartPoint;
            char m_hStartPoint[0x4]; // 0xc34            
            // metadata: MNetworkEnable
            // m_hEndPoint has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hEndPoint;
            char m_hEndPoint[0x4]; // 0xc38            
            // metadata: MNetworkEnable
            source2sdk::modellib::AttachmentHandle_t m_iStartAttachment; // 0xc3c            
            // metadata: MNetworkEnable
            source2sdk::modellib::AttachmentHandle_t m_iEndAttachment; // 0xc3d            
            // metadata: MNetworkEnable
            std::uint8_t m_Subdiv; // 0xc3e            
            uint8_t _pad0c3f[0x1]; // 0xc3f
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RecomputeSprings"
            std::int16_t m_RopeLength; // 0xc40            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RecomputeSprings"
            std::int16_t m_Slack; // 0xc42            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "10"
            // metadata: MNetworkMinValue "0,100000"
            // metadata: MNetworkMaxValue "10,000000"
            float m_TextureScale; // 0xc44            
            // metadata: MNetworkEnable
            std::uint8_t m_fLockedPoints; // 0xc48            
            // metadata: MNetworkEnable
            std::uint8_t m_nChangeCount; // 0xc49            
            uint8_t _pad0c4a[0x2]; // 0xc4a
            // metadata: MNetworkEnable
            float m_Width; // 0xc4c            
            source2sdk::client::C_RopeKeyframe_CPhysicsDelegate m_PhysicsDelegate; // 0xc50            
            // m_hMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_hMaterial;
            char m_hMaterial[0x8]; // 0xc60            
            std::int32_t m_TextureHeight; // 0xc68            
            Vector m_vecImpulse; // 0xc6c            
            Vector m_vecPreviousImpulse; // 0xc78            
            float m_flCurrentGustTimer; // 0xc84            
            float m_flCurrentGustLifetime; // 0xc88            
            float m_flTimeToNextGust; // 0xc8c            
            Vector m_vWindDir; // 0xc90            
            Vector m_vColorMod; // 0xc9c            
            Vector m_vCachedEndPointAttachmentPos[2]; // 0xca8            
            QAngle m_vCachedEndPointAttachmentAngle[2]; // 0xcc0            
            // metadata: MNetworkEnable
            bool m_bConstrainBetweenEndpoints; // 0xcd8            
            // start of bitfield block
            uint8_t m_bEndPointAttachmentPositionsDirty: 1;
            uint8_t m_bEndPointAttachmentAnglesDirty: 1;
            uint8_t m_bNewDataThisFrame: 1;
            uint8_t m_bPhysicsInitted: 1;
            // end of bitfield block// 4 bits
            uint8_t _pad0cda[0x6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_RopeKeyframe because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_RopeKeyframe) == 0xce0);
    };
};
