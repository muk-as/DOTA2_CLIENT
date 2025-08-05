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
        // Size: 0xd08
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
            uint8_t _pad0998[0x8]; // 0x998
            // m_LinksTouchingSomething has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CBitVec<10> m_LinksTouchingSomething;
            char m_LinksTouchingSomething[0x4]; // 0x9a0            
            std::int32_t m_nLinksTouchingSomething; // 0x9a4            
            bool m_bApplyWind; // 0x9a8            
            uint8_t _pad09a9[0x3]; // 0x9a9
            std::int32_t m_fPrevLockedPoints; // 0x9ac            
            std::int32_t m_iForcePointMoveCounter; // 0x9b0            
            bool m_bPrevEndPointPos[2]; // 0x9b4            
            uint8_t _pad09b6[0x2]; // 0x9b6
            Vector m_vPrevEndPointPos[2]; // 0x9b8            
            float m_flCurScroll; // 0x9d0            
            // metadata: MNetworkEnable
            float m_flScrollSpeed; // 0x9d4            
            // metadata: MNetworkEnable
            std::uint16_t m_RopeFlags; // 0x9d8            
            uint8_t _pad09da[0x6]; // 0x9da
            // metadata: MNetworkEnable
            // m_iRopeMaterialModelIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_iRopeMaterialModelIndex;
            char m_iRopeMaterialModelIndex[0x8]; // 0x9e0            
            uint8_t _pad09e8[0x270]; // 0x9e8
            // metadata: MNetworkEnable
            std::uint8_t m_nSegments; // 0xc58            
            uint8_t _pad0c59[0x3]; // 0xc59
            // metadata: MNetworkEnable
            // m_hStartPoint has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hStartPoint;
            char m_hStartPoint[0x4]; // 0xc5c            
            // metadata: MNetworkEnable
            // m_hEndPoint has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hEndPoint;
            char m_hEndPoint[0x4]; // 0xc60            
            // metadata: MNetworkEnable
            source2sdk::modellib::AttachmentHandle_t m_iStartAttachment; // 0xc64            
            // metadata: MNetworkEnable
            source2sdk::modellib::AttachmentHandle_t m_iEndAttachment; // 0xc65            
            // metadata: MNetworkEnable
            std::uint8_t m_Subdiv; // 0xc66            
            uint8_t _pad0c67[0x1]; // 0xc67
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RecomputeSprings"
            std::int16_t m_RopeLength; // 0xc68            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RecomputeSprings"
            std::int16_t m_Slack; // 0xc6a            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "10"
            // metadata: MNetworkMinValue "0,100000"
            // metadata: MNetworkMaxValue "10,000000"
            float m_TextureScale; // 0xc6c            
            // metadata: MNetworkEnable
            std::uint8_t m_fLockedPoints; // 0xc70            
            // metadata: MNetworkEnable
            std::uint8_t m_nChangeCount; // 0xc71            
            uint8_t _pad0c72[0x2]; // 0xc72
            // metadata: MNetworkEnable
            float m_Width; // 0xc74            
            source2sdk::client::C_RopeKeyframe_CPhysicsDelegate m_PhysicsDelegate; // 0xc78            
            // m_hMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_hMaterial;
            char m_hMaterial[0x8]; // 0xc88            
            std::int32_t m_TextureHeight; // 0xc90            
            Vector m_vecImpulse; // 0xc94            
            Vector m_vecPreviousImpulse; // 0xca0            
            float m_flCurrentGustTimer; // 0xcac            
            float m_flCurrentGustLifetime; // 0xcb0            
            float m_flTimeToNextGust; // 0xcb4            
            Vector m_vWindDir; // 0xcb8            
            Vector m_vColorMod; // 0xcc4            
            Vector m_vCachedEndPointAttachmentPos[2]; // 0xcd0            
            QAngle m_vCachedEndPointAttachmentAngle[2]; // 0xce8            
            // metadata: MNetworkEnable
            bool m_bConstrainBetweenEndpoints; // 0xd00            
            // start of bitfield block
            uint8_t m_bEndPointAttachmentPositionsDirty: 1;
            uint8_t m_bEndPointAttachmentAnglesDirty: 1;
            uint8_t m_bNewDataThisFrame: 1;
            uint8_t m_bPhysicsInitted: 1;
            // end of bitfield block// 4 bits
            uint8_t _pad0d02[0x6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_RopeKeyframe because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_RopeKeyframe) == 0xd08);
    };
};
