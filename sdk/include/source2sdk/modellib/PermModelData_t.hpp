#pragma once
#include "source2sdk/modellib/MaterialGroup_t.hpp"
#include "source2sdk/modellib/ModelBoneFlexDriver_t.hpp"
#include "source2sdk/modellib/ModelSkeletonData_t.hpp"
#include "source2sdk/modellib/PermModelDataAnimatedMaterialAttribute_t.hpp"
#include "source2sdk/modellib/PermModelExtPart_t.hpp"
#include "source2sdk/modellib/PermModelInfo_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCAnimationGroup.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCPhysAggregateData.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCRenderMesh.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCSequenceGroupData.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
    class CModelConfigList;
};

namespace source2sdk::modellib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x2c8
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct PermModelData_t
    {
    public:
        CUtlString m_name; // 0x0        
        modellib::PermModelInfo_t m_modelInfo; // 0x8        
        // m_ExtParts has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<modellib::PermModelExtPart_t> m_ExtParts;
        char m_ExtParts[0x18]; // 0x60        
        // m_refMeshes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CStrongHandle<resourcesystem::InfoForResourceTypeCRenderMesh>> m_refMeshes;
        char m_refMeshes[0x18]; // 0x78        
        // m_refMeshGroupMasks has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<uint64_t> m_refMeshGroupMasks;
        char m_refMeshGroupMasks[0x18]; // 0x90        
        // m_refPhysGroupMasks has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<uint64_t> m_refPhysGroupMasks;
        char m_refPhysGroupMasks[0x18]; // 0xa8        
        // m_refLODGroupMasks has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<uint8_t> m_refLODGroupMasks;
        char m_refLODGroupMasks[0x18]; // 0xc0        
        // m_lodGroupSwitchDistances has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<float> m_lodGroupSwitchDistances;
        char m_lodGroupSwitchDistances[0x18]; // 0xd8        
        // m_refPhysicsData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CStrongHandle<resourcesystem::InfoForResourceTypeCPhysAggregateData>> m_refPhysicsData;
        char m_refPhysicsData[0x18]; // 0xf0        
        // m_refPhysicsHitboxData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CStrongHandle<resourcesystem::InfoForResourceTypeCPhysAggregateData>> m_refPhysicsHitboxData;
        char m_refPhysicsHitboxData[0x18]; // 0x108        
        // m_refAnimGroups has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CStrongHandle<resourcesystem::InfoForResourceTypeCAnimationGroup>> m_refAnimGroups;
        char m_refAnimGroups[0x18]; // 0x120        
        // m_refSequenceGroups has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CStrongHandle<resourcesystem::InfoForResourceTypeCSequenceGroupData>> m_refSequenceGroups;
        char m_refSequenceGroups[0x18]; // 0x138        
        // m_meshGroups has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlString> m_meshGroups;
        char m_meshGroups[0x18]; // 0x150        
        // m_materialGroups has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<modellib::MaterialGroup_t> m_materialGroups;
        char m_materialGroups[0x18]; // 0x168        
        uint64_t m_nDefaultMeshGroupMask; // 0x180        
        modellib::ModelSkeletonData_t m_modelSkeleton; // 0x188        
        // m_remappingTable has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int16_t> m_remappingTable;
        char m_remappingTable[0x18]; // 0x230        
        // m_remappingTableStarts has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<uint16_t> m_remappingTableStarts;
        char m_remappingTableStarts[0x18]; // 0x248        
        // m_boneFlexDrivers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<modellib::ModelBoneFlexDriver_t> m_boneFlexDrivers;
        char m_boneFlexDrivers[0x18]; // 0x260        
        modellib::CModelConfigList* m_pModelConfigList; // 0x278        
        // m_BodyGroupsHiddenInTools has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlString> m_BodyGroupsHiddenInTools;
        char m_BodyGroupsHiddenInTools[0x18]; // 0x280        
        // m_refAnimIncludeModels has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CStrongHandle<resourcesystem::InfoForResourceTypeCModel>> m_refAnimIncludeModels;
        char m_refAnimIncludeModels[0x18]; // 0x298        
        // m_AnimatedMaterialAttributes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<modellib::PermModelDataAnimatedMaterialAttribute_t> m_AnimatedMaterialAttributes;
        char m_AnimatedMaterialAttributes[0x18]; // 0x2b0        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(PermModelData_t, m_name) == 0x0);
    static_assert(offsetof(PermModelData_t, m_modelInfo) == 0x8);
    static_assert(offsetof(PermModelData_t, m_ExtParts) == 0x60);
    static_assert(offsetof(PermModelData_t, m_refMeshes) == 0x78);
    static_assert(offsetof(PermModelData_t, m_refMeshGroupMasks) == 0x90);
    static_assert(offsetof(PermModelData_t, m_refPhysGroupMasks) == 0xa8);
    static_assert(offsetof(PermModelData_t, m_refLODGroupMasks) == 0xc0);
    static_assert(offsetof(PermModelData_t, m_lodGroupSwitchDistances) == 0xd8);
    static_assert(offsetof(PermModelData_t, m_refPhysicsData) == 0xf0);
    static_assert(offsetof(PermModelData_t, m_refPhysicsHitboxData) == 0x108);
    static_assert(offsetof(PermModelData_t, m_refAnimGroups) == 0x120);
    static_assert(offsetof(PermModelData_t, m_refSequenceGroups) == 0x138);
    static_assert(offsetof(PermModelData_t, m_meshGroups) == 0x150);
    static_assert(offsetof(PermModelData_t, m_materialGroups) == 0x168);
    static_assert(offsetof(PermModelData_t, m_nDefaultMeshGroupMask) == 0x180);
    static_assert(offsetof(PermModelData_t, m_modelSkeleton) == 0x188);
    static_assert(offsetof(PermModelData_t, m_remappingTable) == 0x230);
    static_assert(offsetof(PermModelData_t, m_remappingTableStarts) == 0x248);
    static_assert(offsetof(PermModelData_t, m_boneFlexDrivers) == 0x260);
    static_assert(offsetof(PermModelData_t, m_pModelConfigList) == 0x278);
    static_assert(offsetof(PermModelData_t, m_BodyGroupsHiddenInTools) == 0x280);
    static_assert(offsetof(PermModelData_t, m_refAnimIncludeModels) == 0x298);
    static_assert(offsetof(PermModelData_t, m_AnimatedMaterialAttributes) == 0x2b0);
    
    static_assert(sizeof(PermModelData_t) == 0x2c8);
};
