#pragma once
#include "source2sdk/client/CNetworkOriginCellCoordQuantizedVector.hpp"
#include "source2sdk/server/CGameSceneNodeHandle.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::entity2
{
    class CEntityInstance;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: true
    // Size: 0x160
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "CGameSceneNodeHandle m_hParent"
    // static metadata: MNetworkVarNames "CNetworkOriginCellCoordQuantizedVector m_vecOrigin"
    // static metadata: MNetworkVarNames "QAngle m_angRotation"
    // static metadata: MNetworkVarNames "float m_flScale"
    // static metadata: MNetworkVarNames "CUtlStringToken m_name"
    // static metadata: MNetworkVarNames "CUtlStringToken m_hierarchyAttachName"
    #pragma pack(push, 1)
    class CGameSceneNode
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x10]; // 0x0
        // metadata: MNetworkDisable
        CTransform m_nodeToWorld; // 0x10        
        // metadata: MNetworkDisable
        entity2::CEntityInstance* m_pOwner; // 0x30        
        // metadata: MNetworkDisable
        server::CGameSceneNode* m_pParent; // 0x38        
        // metadata: MNetworkDisable
        server::CGameSceneNode* m_pChild; // 0x40        
        // metadata: MNetworkDisable
        server::CGameSceneNode* m_pNextSibling; // 0x48        
        [[maybe_unused]] std::uint8_t pad_0x50[0x28]; // 0x50
        // metadata: MNetworkEnable
        // metadata: MNetworkSerializer "gameSceneNode"
        // metadata: MNetworkChangeCallback "gameSceneNodeHierarchyParentChanged"
        // metadata: MNetworkPriority "32"
        // metadata: MNetworkVarEmbeddedFieldOffsetDelta "8"
        server::CGameSceneNodeHandle m_hParent; // 0x78        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        // metadata: MNetworkUserGroup "Origin"
        // metadata: MNetworkChangeCallback "gameSceneNodeLocalOriginChanged"
        client::CNetworkOriginCellCoordQuantizedVector m_vecOrigin; // 0x88        
        [[maybe_unused]] std::uint8_t pad_0xb8[0x8]; // 0xb8
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        // metadata: MNetworkSerializer "gameSceneNodeStepSimulationAnglesSerializer"
        // metadata: MNetworkChangeCallback "gameSceneNodeLocalAnglesChanged"
        QAngle m_angRotation; // 0xc0        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "gameSceneNodeLocalScaleChanged"
        // metadata: MNetworkPriority "32"
        float m_flScale; // 0xcc        
        // metadata: MNetworkDisable
        Vector m_vecAbsOrigin; // 0xd0        
        // metadata: MNetworkDisable
        QAngle m_angAbsRotation; // 0xdc        
        // metadata: MNetworkDisable
        float m_flAbsScale; // 0xe8        
        // metadata: MNetworkDisable
        int16_t m_nParentAttachmentOrBone; // 0xec        
        // metadata: MNetworkDisable
        bool m_bDebugAbsOriginChanges; // 0xee        
        // metadata: MNetworkDisable
        bool m_bDormant; // 0xef        
        // metadata: MNetworkDisable
        bool m_bForceParentToBeNetworked; // 0xf0        
        // start of bitfield block at 0xf1
        // metadata: MNetworkDisable
        uint16_t m_bDirtyHierarchy: 1;
        // metadata: MNetworkDisable
        uint16_t m_bDirtyBoneMergeInfo: 1;
        // metadata: MNetworkDisable
        uint16_t m_bNetworkedPositionChanged: 1;
        // metadata: MNetworkDisable
        uint16_t m_bNetworkedAnglesChanged: 1;
        // metadata: MNetworkDisable
        uint16_t m_bNetworkedScaleChanged: 1;
        // metadata: MNetworkDisable
        uint16_t m_bWillBeCallingPostDataUpdate: 1;
        // metadata: MNetworkDisable
        uint16_t m_bBoneMergeFlex: 1;
        // metadata: MNetworkDisable
        uint16_t m_nLatchAbsOrigin: 2;
        // metadata: MNetworkDisable
        uint16_t m_bDirtyBoneMergeBoneToRoot: 1;
        // end of bitfield block // 10 bits
        // metadata: MNetworkDisable
        uint8_t m_nHierarchicalDepth; // 0xf3        
        // metadata: MNetworkDisable
        uint8_t m_nHierarchyType; // 0xf4        
        // metadata: MNetworkDisable
        uint8_t m_nDoNotSetAnimTimeInInvalidatePhysicsCount; // 0xf5        
        [[maybe_unused]] std::uint8_t pad_0xf6[0x2]; // 0xf6
        // metadata: MNetworkEnable
        CUtlStringToken m_name; // 0xf8        
        [[maybe_unused]] std::uint8_t pad_0xfc[0x3c]; // 0xfc
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "gameSceneNodeHierarchyAttachmentChanged"
        CUtlStringToken m_hierarchyAttachName; // 0x138        
        // metadata: MNetworkDisable
        float m_flZOffset; // 0x13c        
        // metadata: MNetworkDisable
        float m_flClientLocalScale; // 0x140        
        // metadata: MNetworkDisable
        Vector m_vRenderOrigin; // 0x144        
        [[maybe_unused]] std::uint8_t pad_0x150[0x10];
        
        // Datamap fields:
        // void m_bDirtyHierarchy; // -0x1
        // void m_bDirtyBoneMergeInfo; // -0x1
        // void m_bNetworkedPositionChanged; // -0x1
        // void m_bNetworkedAnglesChanged; // -0x1
        // void m_bNetworkedScaleChanged; // -0x1
        // void m_bWillBeCallingPostDataUpdate; // -0x1
        // void m_nLatchAbsOrigin; // -0x1
        // void m_bDirtyBoneMergeBoneToRoot; // -0x1
        // CHandle< CBaseEntity > parentname; // 0x7fffffff
        // bool useLocalOffset; // 0x7fffffff
        // bool useParentRenderBounds; // 0x7fffffff
        // bool positionInLocalSpace; // 0x7fffffff
        // Vector scales; // 0x7fffffff
        // Vector local.scales; // 0x7fffffff
        // float scale; // 0x7fffffff
        // float ModelScale; // 0x7fffffff
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CGameSceneNode, m_nodeToWorld) == 0x10);
    static_assert(offsetof(CGameSceneNode, m_pOwner) == 0x30);
    static_assert(offsetof(CGameSceneNode, m_pParent) == 0x38);
    static_assert(offsetof(CGameSceneNode, m_pChild) == 0x40);
    static_assert(offsetof(CGameSceneNode, m_pNextSibling) == 0x48);
    static_assert(offsetof(CGameSceneNode, m_hParent) == 0x78);
    static_assert(offsetof(CGameSceneNode, m_vecOrigin) == 0x88);
    static_assert(offsetof(CGameSceneNode, m_angRotation) == 0xc0);
    static_assert(offsetof(CGameSceneNode, m_flScale) == 0xcc);
    static_assert(offsetof(CGameSceneNode, m_vecAbsOrigin) == 0xd0);
    static_assert(offsetof(CGameSceneNode, m_angAbsRotation) == 0xdc);
    static_assert(offsetof(CGameSceneNode, m_flAbsScale) == 0xe8);
    static_assert(offsetof(CGameSceneNode, m_nParentAttachmentOrBone) == 0xec);
    static_assert(offsetof(CGameSceneNode, m_bDebugAbsOriginChanges) == 0xee);
    static_assert(offsetof(CGameSceneNode, m_bDormant) == 0xef);
    static_assert(offsetof(CGameSceneNode, m_bForceParentToBeNetworked) == 0xf0);
    // Cannot assert offset of bitfield CGameSceneNode::m_bDirtyHierarchy
    // Cannot assert offset of bitfield CGameSceneNode::m_bDirtyBoneMergeInfo
    // Cannot assert offset of bitfield CGameSceneNode::m_bNetworkedPositionChanged
    // Cannot assert offset of bitfield CGameSceneNode::m_bNetworkedAnglesChanged
    // Cannot assert offset of bitfield CGameSceneNode::m_bNetworkedScaleChanged
    // Cannot assert offset of bitfield CGameSceneNode::m_bWillBeCallingPostDataUpdate
    // Cannot assert offset of bitfield CGameSceneNode::m_bBoneMergeFlex
    // Cannot assert offset of bitfield CGameSceneNode::m_nLatchAbsOrigin
    // Cannot assert offset of bitfield CGameSceneNode::m_bDirtyBoneMergeBoneToRoot
    static_assert(offsetof(CGameSceneNode, m_nHierarchicalDepth) == 0xf3);
    static_assert(offsetof(CGameSceneNode, m_nHierarchyType) == 0xf4);
    static_assert(offsetof(CGameSceneNode, m_nDoNotSetAnimTimeInInvalidatePhysicsCount) == 0xf5);
    static_assert(offsetof(CGameSceneNode, m_name) == 0xf8);
    static_assert(offsetof(CGameSceneNode, m_hierarchyAttachName) == 0x138);
    static_assert(offsetof(CGameSceneNode, m_flZOffset) == 0x13c);
    static_assert(offsetof(CGameSceneNode, m_flClientLocalScale) == 0x140);
    static_assert(offsetof(CGameSceneNode, m_vRenderOrigin) == 0x144);
    
    static_assert(sizeof(CGameSceneNode) == 0x160);
};
