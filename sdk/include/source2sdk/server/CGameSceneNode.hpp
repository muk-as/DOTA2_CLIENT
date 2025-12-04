#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CNetworkOriginCellCoordQuantizedVector.hpp"
#include "source2sdk/server/CGameSceneNodeHandle.hpp"
namespace source2sdk
{
    namespace entity2
    {
        struct CEntityInstance;
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
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: true
        // Size: 0x_
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
            uint8_t _pad_[0x_]; // 0x_
            CTransformWS m_nodeToWorld; // 0x_            
            source2sdk::entity2::CEntityInstance* m_pOwner; // 0x_            
            source2sdk::server::CGameSceneNode* m_pParent; // 0x_            
            source2sdk::server::CGameSceneNode* m_pChild; // 0x_            
            source2sdk::server::CGameSceneNode* m_pNextSibling; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNetworkSerializer "gameSceneNode"
            // metadata: MNetworkChangeCallback "gameSceneNodeHierarchyParentChanged"
            // metadata: MNetworkPriority "32"
            // metadata: MNetworkVarEmbeddedFieldOffsetDelta "8"
            source2sdk::server::CGameSceneNodeHandle m_hParent; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            // metadata: MNetworkUserGroup "Origin"
            // metadata: MNetworkChangeCallback "gameSceneNodeLocalOriginChanged"
            source2sdk::client::CNetworkOriginCellCoordQuantizedVector m_vecOrigin; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            // metadata: MNetworkSerializer "gameSceneNodeStepSimulationAnglesSerializer"
            // metadata: MNetworkChangeCallback "gameSceneNodeLocalAnglesChanged"
            QAngle m_angRotation; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "gameSceneNodeLocalScaleChanged"
            // metadata: MNetworkPriority "32"
            float m_flScale; // 0x_            
            VectorWS m_vecAbsOrigin; // 0x_            
            QAngle m_angAbsRotation; // 0x_            
            float m_flAbsScale; // 0x_            
            std::int16_t m_nParentAttachmentOrBone; // 0x_            
            bool m_bDebugAbsOriginChanges; // 0x_            
            bool m_bDormant; // 0x_            
            bool m_bForceParentToBeNetworked; // 0x_            
            // start of bitfield block
            uint16_t m_bDirtyHierarchy: 1;
            uint16_t m_bDirtyBoneMergeInfo: 1;
            uint16_t m_bNetworkedPositionChanged: 1;
            uint16_t m_bNetworkedAnglesChanged: 1;
            uint16_t m_bNetworkedScaleChanged: 1;
            uint16_t m_bWillBeCallingPostDataUpdate: 1;
            uint16_t m_bBoneMergeFlex: 1;
            uint16_t m_nLatchAbsOrigin: 2;
            uint16_t m_bDirtyBoneMergeBoneToRoot: 1;
            // end of bitfield block// 10 bits
            std::uint8_t m_nHierarchicalDepth; // 0x_            
            std::uint8_t m_nHierarchyType; // 0x_            
            std::uint8_t m_nDoNotSetAnimTimeInInvalidatePhysicsCount; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            CUtlStringToken m_name; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "gameSceneNodeHierarchyAttachmentChanged"
            CUtlStringToken m_hierarchyAttachName; // 0x_            
            float m_flZOffset; // 0x_            
            float m_flClientLocalScale; // 0x_            
            Vector m_vRenderOrigin; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // void m_bDirtyHierarchy; // -0x_
            // void m_bDirtyBoneMergeInfo; // -0x_
            // void m_bNetworkedPositionChanged; // -0x_
            // void m_bNetworkedAnglesChanged; // -0x_
            // void m_bNetworkedScaleChanged; // -0x_
            // void m_bWillBeCallingPostDataUpdate; // -0x_
            // void m_nLatchAbsOrigin; // -0x_
            // void m_bDirtyBoneMergeBoneToRoot; // -0x_
            // CHandle< CBaseEntity > parentname; // 0x_
            // bool useLocalOffset; // 0x_
            // bool useParentRenderBounds; // 0x_
            // bool positionInLocalSpace; // 0x_
            // Vector scales; // 0x_
            // Vector local.scales; // 0x_
            // float scale; // 0x_
            // float ModelScale; // 0x_
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CGameSceneNode, m_nodeToWorld) == 0x_);
        static_assert(offsetof(source2sdk::server::CGameSceneNode, m_pOwner) == 0x_);
        static_assert(offsetof(source2sdk::server::CGameSceneNode, m_pParent) == 0x_);
        static_assert(offsetof(source2sdk::server::CGameSceneNode, m_pChild) == 0x_);
        static_assert(offsetof(source2sdk::server::CGameSceneNode, m_pNextSibling) == 0x_);
        static_assert(offsetof(source2sdk::server::CGameSceneNode, m_hParent) == 0x_);
        static_assert(offsetof(source2sdk::server::CGameSceneNode, m_vecOrigin) == 0x_);
        static_assert(offsetof(source2sdk::server::CGameSceneNode, m_angRotation) == 0x_);
        static_assert(offsetof(source2sdk::server::CGameSceneNode, m_flScale) == 0x_);
        static_assert(offsetof(source2sdk::server::CGameSceneNode, m_vecAbsOrigin) == 0x_);
        static_assert(offsetof(source2sdk::server::CGameSceneNode, m_angAbsRotation) == 0x_);
        static_assert(offsetof(source2sdk::server::CGameSceneNode, m_flAbsScale) == 0x_);
        static_assert(offsetof(source2sdk::server::CGameSceneNode, m_nParentAttachmentOrBone) == 0x_);
        static_assert(offsetof(source2sdk::server::CGameSceneNode, m_bDebugAbsOriginChanges) == 0x_);
        static_assert(offsetof(source2sdk::server::CGameSceneNode, m_bDormant) == 0x_);
        static_assert(offsetof(source2sdk::server::CGameSceneNode, m_bForceParentToBeNetworked) == 0x_);
        // Cannot assert offset of bitfield CGameSceneNode::m_bDirtyHierarchy
        // Cannot assert offset of bitfield CGameSceneNode::m_bDirtyBoneMergeInfo
        // Cannot assert offset of bitfield CGameSceneNode::m_bNetworkedPositionChanged
        // Cannot assert offset of bitfield CGameSceneNode::m_bNetworkedAnglesChanged
        // Cannot assert offset of bitfield CGameSceneNode::m_bNetworkedScaleChanged
        // Cannot assert offset of bitfield CGameSceneNode::m_bWillBeCallingPostDataUpdate
        // Cannot assert offset of bitfield CGameSceneNode::m_bBoneMergeFlex
        // Cannot assert offset of bitfield CGameSceneNode::m_nLatchAbsOrigin
        // Cannot assert offset of bitfield CGameSceneNode::m_bDirtyBoneMergeBoneToRoot
        static_assert(offsetof(source2sdk::server::CGameSceneNode, m_nHierarchicalDepth) == 0x_);
        static_assert(offsetof(source2sdk::server::CGameSceneNode, m_nHierarchyType) == 0x_);
        static_assert(offsetof(source2sdk::server::CGameSceneNode, m_nDoNotSetAnimTimeInInvalidatePhysicsCount) == 0x_);
        static_assert(offsetof(source2sdk::server::CGameSceneNode, m_name) == 0x_);
        static_assert(offsetof(source2sdk::server::CGameSceneNode, m_hierarchyAttachName) == 0x_);
        static_assert(offsetof(source2sdk::server::CGameSceneNode, m_flZOffset) == 0x_);
        static_assert(offsetof(source2sdk::server::CGameSceneNode, m_flClientLocalScale) == 0x_);
        static_assert(offsetof(source2sdk::server::CGameSceneNode, m_vRenderOrigin) == 0x_);
        
        static_assert(sizeof(source2sdk::server::CGameSceneNode) == 0x_);
    };
};
