#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/modellib/PhysShapeMarkup_t.hpp"
#include "source2sdk/modellib/VPhysXBodyPart_t.hpp"
#include "source2sdk/modellib/VPhysXCollisionAttributes_t.hpp"
#include "source2sdk/modellib/VPhysXConstraint2_t.hpp"
#include "source2sdk/modellib/VPhysXJoint_t.hpp"
namespace source2sdk
{
    namespace physicslib
    {
        struct PhysFeModelDesc_t;
    };
};

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace modellib
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct VPhysXAggregateData_t
        {
        public:
            std::uint16_t m_nFlags; // 0x_            
            std::uint16_t m_nRefCounter; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_bonesHash has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::uint32_t> m_bonesHash;
            char m_bonesHash[0x_]; // 0x_            
            // m_boneNames has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_boneNames;
            char m_boneNames[0x_]; // 0x_            
            // m_indexNames has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::uint16_t> m_indexNames;
            char m_indexNames[0x_]; // 0x_            
            // m_indexHash has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::uint16_t> m_indexHash;
            char m_indexHash[0x_]; // 0x_            
            // m_bindPose has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<matrix3x4a_t> m_bindPose;
            char m_bindPose[0x_]; // 0x_            
            // m_parts has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::modellib::VPhysXBodyPart_t> m_parts;
            char m_parts[0x_]; // 0x_            
            // m_shapeMarkups has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::modellib::PhysShapeMarkup_t> m_shapeMarkups;
            char m_shapeMarkups[0x_]; // 0x_            
            // m_constraints2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::modellib::VPhysXConstraint2_t> m_constraints2;
            char m_constraints2[0x_]; // 0x_            
            // m_joints has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::modellib::VPhysXJoint_t> m_joints;
            char m_joints[0x_]; // 0x_            
            source2sdk::physicslib::PhysFeModelDesc_t* m_pFeModel; // 0x_            
            // m_boneParents has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::uint16_t> m_boneParents;
            char m_boneParents[0x_]; // 0x_            
            // m_surfacePropertyHashes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::uint32_t> m_surfacePropertyHashes;
            char m_surfacePropertyHashes[0x_]; // 0x_            
            // m_collisionAttributes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::modellib::VPhysXCollisionAttributes_t> m_collisionAttributes;
            char m_collisionAttributes[0x_]; // 0x_            
            // m_debugPartNames has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_debugPartNames;
            char m_debugPartNames[0x_]; // 0x_            
            CUtlString m_embeddedKeyvalues; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::VPhysXAggregateData_t, m_nFlags) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXAggregateData_t, m_nRefCounter) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXAggregateData_t, m_bonesHash) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXAggregateData_t, m_boneNames) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXAggregateData_t, m_indexNames) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXAggregateData_t, m_indexHash) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXAggregateData_t, m_bindPose) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXAggregateData_t, m_parts) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXAggregateData_t, m_shapeMarkups) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXAggregateData_t, m_constraints2) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXAggregateData_t, m_joints) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXAggregateData_t, m_pFeModel) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXAggregateData_t, m_boneParents) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXAggregateData_t, m_surfacePropertyHashes) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXAggregateData_t, m_collisionAttributes) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXAggregateData_t, m_debugPartNames) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXAggregateData_t, m_embeddedKeyvalues) == 0x_);
        
        static_assert(sizeof(source2sdk::modellib::VPhysXAggregateData_t) == 0x_);
    };
};
