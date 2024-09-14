#pragma once
#include "source2sdk/modellib/AttachmentHandle_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"
#include "source2sdk/server/CBaseModelEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x7e0
    // Has VTable
    // Construct allowed
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
    class CRopeKeyframe : public server::CBaseModelEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x788[0x8]; // 0x788
        // metadata: MNetworkEnable
        uint16_t m_RopeFlags; // 0x790        
        [[maybe_unused]] std::uint8_t pad_0x792[0x6]; // 0x792
        CUtlSymbolLarge m_iNextLinkName; // 0x798        
        // metadata: MNetworkEnable
        int16_t m_Slack; // 0x7a0        
        [[maybe_unused]] std::uint8_t pad_0x7a2[0x2]; // 0x7a2
        // metadata: MNetworkEnable
        float m_Width; // 0x7a4        
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "10"
        // metadata: MNetworkMinValue "0,100000"
        // metadata: MNetworkMaxValue "10,000000"
        float m_TextureScale; // 0x7a8        
        // metadata: MNetworkEnable
        uint8_t m_nSegments; // 0x7ac        
        // metadata: MNetworkEnable
        bool m_bConstrainBetweenEndpoints; // 0x7ad        
        [[maybe_unused]] std::uint8_t pad_0x7ae[0x2]; // 0x7ae
        CUtlSymbolLarge m_strRopeMaterialModel; // 0x7b0        
        // metadata: MNetworkEnable
        // m_iRopeMaterialModelIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_iRopeMaterialModelIndex;
        char m_iRopeMaterialModelIndex[0x8]; // 0x7b8        
        // metadata: MNetworkEnable
        uint8_t m_Subdiv; // 0x7c0        
        // metadata: MNetworkEnable
        uint8_t m_nChangeCount; // 0x7c1        
        // metadata: MNetworkEnable
        int16_t m_RopeLength; // 0x7c2        
        // metadata: MNetworkEnable
        uint8_t m_fLockedPoints; // 0x7c4        
        bool m_bCreatedFromMapFile; // 0x7c5        
        [[maybe_unused]] std::uint8_t pad_0x7c6[0x2]; // 0x7c6
        // metadata: MNetworkEnable
        float m_flScrollSpeed; // 0x7c8        
        bool m_bStartPointValid; // 0x7cc        
        bool m_bEndPointValid; // 0x7cd        
        [[maybe_unused]] std::uint8_t pad_0x7ce[0x2]; // 0x7ce
        // metadata: MNetworkEnable
        // m_hStartPoint has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hStartPoint;
        char m_hStartPoint[0x4]; // 0x7d0        
        // metadata: MNetworkEnable
        // m_hEndPoint has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hEndPoint;
        char m_hEndPoint[0x4]; // 0x7d4        
        // metadata: MNetworkEnable
        modellib::AttachmentHandle_t m_iStartAttachment; // 0x7d8        
        // metadata: MNetworkEnable
        modellib::AttachmentHandle_t m_iEndAttachment; // 0x7d9        
        [[maybe_unused]] std::uint8_t pad_0x7da[0x6];
        
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
    static_assert(sizeof(CRopeKeyframe) == 0x7e0);
};
