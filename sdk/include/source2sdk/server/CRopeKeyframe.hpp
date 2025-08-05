#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/modellib/AttachmentHandle_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"
#include "source2sdk/server/CBaseModelEntity.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

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
        // Size: 0x848
        // Has VTable
        // Construct allowed
        // MNetworkNoBase
        // 
        // static metadata: MNetworkIncludeByUserGroup "Origin"
        // static metadata: MNetworkIncludeByName "CGameSceneNode::m_hParent"
        // static metadata: MNetworkIncludeByName "CGameSceneNode::m_hierarchyAttachName"
        // static metadata: MNetworkIncludeByName "m_nMinCPULevel"
        // static metadata: MNetworkIncludeByName "m_nMaxCPULevel"
        // static metadata: MNetworkIncludeByName "m_nMinGPULevel"
        // static metadata: MNetworkIncludeByName "m_nMaxGPULevel"
        // static metadata: MNetworkVarNames "uint16 m_RopeFlags"
        // static metadata: MNetworkVarNames "int16 m_Slack"
        // static metadata: MNetworkVarNames "float32 m_Width"
        // static metadata: MNetworkVarNames "float32 m_TextureScale"
        // static metadata: MNetworkVarNames "uint8 m_nSegments"
        // static metadata: MNetworkVarNames "bool m_bConstrainBetweenEndpoints"
        // static metadata: MNetworkVarNames "HMaterialStrong m_iRopeMaterialModelIndex"
        // static metadata: MNetworkVarNames "uint8 m_Subdiv"
        // static metadata: MNetworkVarNames "uint8 m_nChangeCount"
        // static metadata: MNetworkVarNames "int16 m_RopeLength"
        // static metadata: MNetworkVarNames "uint8 m_fLockedPoints"
        // static metadata: MNetworkVarNames "float32 m_flScrollSpeed"
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hStartPoint"
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hEndPoint"
        // static metadata: MNetworkVarNames "AttachmentHandle_t m_iStartAttachment"
        // static metadata: MNetworkVarNames "AttachmentHandle_t m_iEndAttachment"
        #pragma pack(push, 1)
        class CRopeKeyframe : public source2sdk::server::CBaseModelEntity
        {
        public:
            uint8_t _pad07f0[0x8]; // 0x7f0
            // metadata: MNetworkEnable
            std::uint16_t m_RopeFlags; // 0x7f8            
            uint8_t _pad07fa[0x6]; // 0x7fa
            CUtlSymbolLarge m_iNextLinkName; // 0x800            
            // metadata: MNetworkEnable
            std::int16_t m_Slack; // 0x808            
            uint8_t _pad080a[0x2]; // 0x80a
            // metadata: MNetworkEnable
            float m_Width; // 0x80c            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "10"
            // metadata: MNetworkMinValue "0,100000"
            // metadata: MNetworkMaxValue "10,000000"
            float m_TextureScale; // 0x810            
            // metadata: MNetworkEnable
            std::uint8_t m_nSegments; // 0x814            
            // metadata: MNetworkEnable
            bool m_bConstrainBetweenEndpoints; // 0x815            
            uint8_t _pad0816[0x2]; // 0x816
            CUtlSymbolLarge m_strRopeMaterialModel; // 0x818            
            // metadata: MNetworkEnable
            // m_iRopeMaterialModelIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_iRopeMaterialModelIndex;
            char m_iRopeMaterialModelIndex[0x8]; // 0x820            
            // metadata: MNetworkEnable
            std::uint8_t m_Subdiv; // 0x828            
            // metadata: MNetworkEnable
            std::uint8_t m_nChangeCount; // 0x829            
            // metadata: MNetworkEnable
            std::int16_t m_RopeLength; // 0x82a            
            // metadata: MNetworkEnable
            std::uint8_t m_fLockedPoints; // 0x82c            
            bool m_bCreatedFromMapFile; // 0x82d            
            uint8_t _pad082e[0x2]; // 0x82e
            // metadata: MNetworkEnable
            float m_flScrollSpeed; // 0x830            
            bool m_bStartPointValid; // 0x834            
            bool m_bEndPointValid; // 0x835            
            uint8_t _pad0836[0x2]; // 0x836
            // metadata: MNetworkEnable
            // m_hStartPoint has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hStartPoint;
            char m_hStartPoint[0x4]; // 0x838            
            // metadata: MNetworkEnable
            // m_hEndPoint has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hEndPoint;
            char m_hEndPoint[0x4]; // 0x83c            
            // metadata: MNetworkEnable
            source2sdk::modellib::AttachmentHandle_t m_iStartAttachment; // 0x840            
            // metadata: MNetworkEnable
            source2sdk::modellib::AttachmentHandle_t m_iEndAttachment; // 0x841            
            uint8_t _pad0842[0x6];
            
            // Datamap fields:
            // float InputSetScrollSpeed; // 0x0
            // Vector InputSetForce; // 0x0
            // void InputBreak; // 0x0
            // int32_t Breakable; // 0x7fffffff
            // int32_t Collide; // 0x7fffffff
            // int32_t Barbed; // 0x7fffffff
            // int32_t UseWind; // 0x7fffffff
            // int32_t Dangling; // 0x7fffffff
            // int32_t Type; // 0x7fffffff
            // int32_t RopeShader; // 0x7fffffff
            // CUtlString RopeMaterial; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CRopeKeyframe because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CRopeKeyframe) == 0x848);
    };
};
